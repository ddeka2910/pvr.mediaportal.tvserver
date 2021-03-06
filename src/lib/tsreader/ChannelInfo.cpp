/*
 *  Copyright (C) 2006 Team MediaPortal
 *  http://www.team-mediaportal.com
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
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1335  USA
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "ChannelInfo.h"

namespace MPTV
{
    CChannelInfo::CChannelInfo(void)
    {
        Reset();
    }

    CChannelInfo::~CChannelInfo(void)
    {
    }

    void CChannelInfo::Reset()
    {
        PatVersion = -1;
        LCN = 10000;
        NetworkId = 0;
        TransportId = 0;
        ServiceId = 0;
        EIT_schedule_flag = 0;
        EIT_present_following_flag = 0;
        RunningStatus = 0;
        FreeCAMode = 0;
        ServiceType = 0;
        MajorChannel = 0;
        MinorChannel = 0;
        Frequency = 0;
        Modulation = 0;
        strcpy(ProviderName, "");
        strcpy(ServiceName, "");
    }
}
