#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x84,0x9f,0xb5}, 9530},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xda,0x92,0x41,0xcc,0xc1,0x19,0x07,0xf8,0xe4,0x44}, 9530}
 };

static SeedSpec6 pnSeed6_test[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x17,0x5c,0x35,0x40}, 51474},

    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xad,0x86,0x6e,0xf1,0x74,0x7f,0x18,0xff,0x77,0x4f}, 51474},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x95,0x04,0x40,0x07,0xba,0xc6,0x52,0xa0,0xd3,0x76}, 51474},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xb5,0xc7,0x0c,0x1f,0x0a,0x08,0x12,0xf6,0xdb,0xed}, 51474}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
