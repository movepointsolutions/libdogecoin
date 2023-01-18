/**********************************************************************
 * Copyright (c) 2022 bluezr                                          *
 * Copyright (c) 2023 michilumin									  *
 * Copyright (c) 2023 The Dogecoin Foundation                         *
 * Distributed under the MIT software license, see the accompanying   *
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

#include "utest.h"

#include <dogecoin/address.h>
#include <dogecoin/dogecoin.h>
#include <dogecoin/utils.h>
#include <dogecoin/qrengine.h>
#include <qr/qr.h>

void test_qr()
{
    char* test_addr = "D8yapy4hPo7MpbMP2fhUHZ9fnRCjXkKUMS";
    printf("qrcode generation - Using test addr:    %s\n", test_addr);

    printf("Print function:\n", NULL);
    qrgen_p2pkh_consoleprint_to_qr(test_addr);

    printf("String function:\n", NULL);
    char tempstr[qrcodegen_BUFFER_LEN_MAX*4];
    qrgen_p2pkh_to_qr_string(test_addr,tempstr);
    printf("%s", tempstr);
}
