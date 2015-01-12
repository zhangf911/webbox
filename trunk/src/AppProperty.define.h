#pragma once

#include "stdafx.h"

#define BASE_APP_VALUE 0x1

enum eAppType
{
	AT_OS = BASE_APP_VALUE << 0,
	AT_APP = BASE_APP_VALUE << 1,
	AT_MUSIC = BASE_APP_VALUE << 2,
	AT_WEB = BASE_APP_VALUE << 3,
	AT_SECURITY = BASE_APP_VALUE << 4,
	AT_MEDIA = BASE_APP_VALUE << 5,
	AT_INDUSTRY = BASE_APP_VALUE << 6,
	AT_DEV = BASE_APP_VALUE << 7,
};