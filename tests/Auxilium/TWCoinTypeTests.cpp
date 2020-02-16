// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWAuxiliumCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeAuxilium));
    auto txId = TWStringCreateWithUTF8Bytes("0x248b3b58811c6d1e5f52f5ff1af154042647b1a98ccc2bc464ab1f6637b7bff7");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeAuxilium, txId));
    auto accId = TWStringCreateWithUTF8Bytes("0x008cb0fcb15cc923aefee360c94ff2c768c570f4");
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeAuxilium, accId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeAuxilium));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeAuxilium));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeAuxilium), 18);
    ASSERT_EQ(TWBlockchainAuxilium, TWCoinTypeBlockchain(TWCoinTypeAuxilium));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeAuxilium));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeAuxilium));
    assertStringsEqual(symbol, "AUX");
    assertStringsEqual(txUrl, "https://explore.auxilium.global/blockchain/transaction/0x248b3b58811c6d1e5f52f5ff1af154042647b1a98ccc2bc464ab1f6637b7bff7");
    assertStringsEqual(accUrl, "https://explore.auxilium.global/blockchain/address_transactions/0x008cb0fcb15cc923aefee360c94ff2c768c570f4");
    assertStringsEqual(id, "auxilium");
    assertStringsEqual(name, "Auxilium");
}
