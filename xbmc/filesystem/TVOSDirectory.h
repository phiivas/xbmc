#pragma once
/*
 *      Copyright (C) 2018 Team MrMC
 *      https://github.com/MrMC
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with MrMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "filesystem/IDirectory.h"
#include "filesystem/posix/PosixDirectory.h"

namespace XFILE
{
  class CTVOSDirectory : public CPosixDirectory
  {
  public:
    CTVOSDirectory();
    virtual ~CTVOSDirectory();

    bool static WantsDirectory(const CURL& url);

    virtual bool GetDirectory(const CURL& url, CFileItemList &items);
    virtual bool Create(const CURL& url);
    virtual bool Exists(const CURL& url);
    virtual bool Remove(const CURL& url);
  };
}
