/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2023  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the website
  *  at http://sire.openbiosim.org
  *
\*********************************************/

#include "releasegil.h"

#include <QTextStream>

namespace SireBase
{
    /** Release the GIL. This returns a handle which, when destroyed,
     *  will automatically re-aquire the GIL (RAII pattern)
     */
    GILHandle release_gil()
    {
        if (detail::ReleaseGILBase::handle != 0)
        {
            return detail::ReleaseGILBase::handle->releaseGIL();
        }
        else
        {
            return GILHandle();
        }
    }

    /** Print the passed string on the Python STDOUT. This is needed
     *  when STDOUT is a different stream or buffered, e.g. when running
     *  in a Jupyter notebook cell
     */
    void print_to_python(const QString &text)
    {
        if (detail::ReleaseGILBase::handle != 0)
        {
            detail::ReleaseGILBase::handle->print(text);
        }
        else
        {
            static QTextStream ts(stdout);
            ts << text;
        }
    }

    namespace detail
    {
        ReleaseGILBase::ReleaseGILBase()
        {
        }

        ReleaseGILBase::~ReleaseGILBase()
        {
        }

        ReleaseGILBase *ReleaseGILBase::handle(0);

        void ReleaseGILBase::registerReleaseGIL(ReleaseGILBase *h)
        {
            if (handle != 0)
            {
                delete handle;
            }

            handle = h;
        }
    }
}
