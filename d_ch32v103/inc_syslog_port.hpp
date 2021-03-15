#ifndef D_CH32V103_INC_SYSLOG_PORT_HPP
#define D_CH32V103_INC_SYSLOG_PORT_HPP

#include "hitsic_common.h"
#include "cstdio"

#ifdef DEBUG
#define SYSLOG_DEBUG
#endif

#define HITSIC_LOG_PRINTF(...)  (printf(__VA_ARGS__))

#define HITSIC_LOG_LINEFEED ("\r\n")

#endif // ! D_CH32V103_INC_SYSLOG_PORT_HPP
