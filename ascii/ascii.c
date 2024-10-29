#include "ascii.h"


void ascii()
{
	int i = 0;
	TCHAR ascii_str[0X20][0X04] =
	{ 
		_T("NUL"),	_T("SOH"),	_T("STX"),	_T("ETX"),
		_T("EOT"),	_T("ENQ"),	_T("ACK"),	_T("BEL"),
		_T("BS"),	_T("HT"),	_T("LF"),	_T("VT"),
		_T("FF"),	_T("CR"),	_T("SO"),	_T("SI"),
		_T("DLE"),	_T("DC1"),	_T("DC2"),	_T("DC3"),
		_T("DC4"),	_T("NAK"),	_T("SYN"),	_T("ETB"),
		_T("CAN"),	_T("EM"),	_T("SUB"),	_T("ESC"),
		_T("FS"),	_T("GS"),	_T("RS"),	_T("US")
	};

	/* title print */
	_tprintf(_T("+-----------------------------------------------------------------------+\n"));
	_tprintf(_T("| %s %s %-8s| %s %s %-8s| %s %s %-8s| %s %s %-8s|\n"), 
		_T("OCT"), _T("DEC"), _T("HEX"), _T("OCT"), _T("DEC"), _T("HEX"), _T("OCT"), _T("DEC"), _T("HEX"), _T("OCT"), _T("DEC"), _T("HEX"));
	_tprintf(_T("+-----------------------------------------------------------------------+\n"));
	/* end */

	/* top print */
	for (i = 0; i < 0x20; i+=4)
	{
		_tprintf(_T("| %03o %03d %03X %-4s")
				 _T("| %03o %03d %03X %-4s") 
				 _T("| %03o %03d %03X %-4s") 
				 _T("| %03o %03d %03X %-4s| \n"), 
				 0 + i, 0 + i, 0 + i, ascii_str[0 + i], 
				 1 + i, 1 + i, 1 + i, ascii_str[1 + i], 
				 2 + i, 2 + i, 2 + i, ascii_str[2 + i], 
				 3 + i, 3 + i, 3 + i, ascii_str[3 + i]);
	}

	/* middle print */
	for (i = 0; i < 0x5B; i += 4)
	{
		_tprintf(_T("| %03o %03d %03X %-4c")
				 _T("| %03o %03d %03X %-4c")
				 _T("| %03o %03d %03X %-4c")
				 _T("| %03o %03d %03X %-4c| \n"), 
				 0x20 + i, 0x20 + i, 0x20 + i, 0x20 + i,
				 0x21 + i, 0x21 + i, 0x21 + i, 0x21 + i,
				 0x22 + i, 0x22 + i, 0x22 + i, 0x22 + i,
				 0x23 + i, 0x23 + i, 0x23 + i, 0x23 + i);
	}

	/* bottom print */
	_tprintf(_T("| %03o %03d %03X %-4c")
			 _T("| %03o %03d %03X %-4c")
			 _T("| %03o %03d %03X %-4c")
			 _T("| %03o %03d %03X %-4s| \n"),
			 0x20 + i, 0x20 + i, 0x20 + i, 0x20 + i,
			 0x21 + i, 0x21 + i, 0x21 + i, 0x21 + i,
			 0x22 + i, 0x22 + i, 0x22 + i, 0x22 + i,
			 0x23 + i, 0x23 + i, 0x23 + i, _T("DEL"));
	_tprintf(_T("+-----------------------------------------------------------------------+\n"));
}
