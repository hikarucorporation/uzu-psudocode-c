// Function : biquads_new
// Namespace: 
// Entry    : 00566aa0
// Prototype: long * biquads_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00566aa0 - 00566d20


long * biquads_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,biquads_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xf0,extraout_RDX,param_12,
                      param_13,param_14);
  plVar1[7] = (long)plVar2;
  plVar1[0xd0] = 0;
  *(undefined4 *)(plVar1 + 0xd1) = 0;
  memset(plVar1 + 0xd2,0,2000);
  memset(plVar1 + 8,0,400);
  plVar1[0x9e] = 0;
  plVar1[0x9f] = 0;
  plVar1[0x6c] = 0;
  plVar1[0x6d] = 0;
  plVar1[0x3a] = 0;
  plVar1[0x3b] = 0;
  plVar1[0xa0] = 0;
  plVar1[0xa1] = 0;
  plVar1[0x6e] = 0;
  plVar1[0x6f] = 0;
  plVar1[0x3c] = 0;
  plVar1[0x3d] = 0;
  plVar1[0xa2] = 0;
  plVar1[0xa3] = 0;
  plVar1[0x70] = 0;
  plVar1[0x71] = 0;
  plVar1[0x3e] = 0;
  plVar1[0x3f] = 0;
  plVar1[0xa4] = 0;
  plVar1[0xa5] = 0;
  plVar1[0x72] = 0;
  plVar1[0x73] = 0;
  plVar1[0x40] = 0;
  plVar1[0x41] = 0;
  plVar1[0xa6] = 0;
  plVar1[0xa7] = 0;
  plVar1[0x74] = 0;
  plVar1[0x75] = 0;
  plVar1[0x42] = 0;
  plVar1[0x43] = 0;
  plVar1[0xa8] = 0;
  plVar1[0xa9] = 0;
  plVar1[0x76] = 0;
  plVar1[0x77] = 0;
  plVar1[0x44] = 0;
  plVar1[0x45] = 0;
  plVar1[0xaa] = 0;
  plVar1[0xab] = 0;
  plVar1[0x78] = 0;
  plVar1[0x79] = 0;
  plVar1[0x46] = 0;
  plVar1[0x47] = 0;
  plVar1[0xac] = 0;
  plVar1[0xad] = 0;
  plVar1[0x7a] = 0;
  plVar1[0x7b] = 0;
  plVar1[0x48] = 0;
  plVar1[0x49] = 0;
  plVar1[0xae] = 0;
  plVar1[0xaf] = 0;
  plVar1[0x7c] = 0;
  plVar1[0x7d] = 0;
  plVar1[0x4a] = 0;
  plVar1[0x4b] = 0;
  plVar1[0xb0] = 0;
  plVar1[0xb1] = 0;
  plVar1[0x7e] = 0;
  plVar1[0x7f] = 0;
  plVar1[0x4c] = 0;
  plVar1[0x4d] = 0;
  plVar1[0xb2] = 0;
  plVar1[0xb3] = 0;
  plVar1[0x80] = 0;
  plVar1[0x81] = 0;
  plVar1[0x4e] = 0;
  plVar1[0x4f] = 0;
  plVar1[0xb4] = 0;
  plVar1[0xb5] = 0;
  plVar1[0x82] = 0;
  plVar1[0x83] = 0;
  plVar1[0x50] = 0;
  plVar1[0x51] = 0;
  plVar1[0xb6] = 0;
  plVar1[0xb7] = 0;
  plVar1[0x84] = 0;
  plVar1[0x85] = 0;
  plVar1[0x52] = 0;
  plVar1[0x53] = 0;
  plVar1[0xb8] = 0;
  plVar1[0xb9] = 0;
  plVar1[0x86] = 0;
  plVar1[0x87] = 0;
  plVar1[0x54] = 0;
  plVar1[0x55] = 0;
  plVar1[0xba] = 0;
  plVar1[0xbb] = 0;
  plVar1[0x88] = 0;
  plVar1[0x89] = 0;
  plVar1[0x56] = 0;
  plVar1[0x57] = 0;
  plVar1[0xbc] = 0;
  plVar1[0xbd] = 0;
  plVar1[0x8a] = 0;
  plVar1[0x8b] = 0;
  plVar1[0x58] = 0;
  plVar1[0x59] = 0;
  plVar1[0xbe] = 0;
  plVar1[0xbf] = 0;
  plVar1[0x8c] = 0;
  plVar1[0x8d] = 0;
  plVar1[0x5a] = 0;
  plVar1[0x5b] = 0;
  plVar1[0xc0] = 0;
  plVar1[0xc1] = 0;
  plVar1[0x8e] = 0;
  plVar1[0x8f] = 0;
  plVar1[0x5c] = 0;
  plVar1[0x5d] = 0;
  plVar1[0xc2] = 0;
  plVar1[0xc3] = 0;
  plVar1[0x90] = 0;
  plVar1[0x91] = 0;
  plVar1[0x5e] = 0;
  plVar1[0x5f] = 0;
  plVar1[0xc4] = 0;
  plVar1[0xc5] = 0;
  plVar1[0x92] = 0;
  plVar1[0x93] = 0;
  plVar1[0x60] = 0;
  plVar1[0x61] = 0;
  plVar1[0xc6] = 0;
  plVar1[199] = 0;
  plVar1[0x94] = 0;
  plVar1[0x95] = 0;
  plVar1[0x62] = 0;
  plVar1[99] = 0;
  plVar1[200] = 0;
  plVar1[0xc9] = 0;
  plVar1[0x96] = 0;
  plVar1[0x97] = 0;
  plVar1[100] = 0;
  plVar1[0x65] = 0;
  plVar1[0xca] = 0;
  plVar1[0xcb] = 0;
  plVar1[0x98] = 0;
  plVar1[0x99] = 0;
  plVar1[0x66] = 0;
  plVar1[0x67] = 0;
  plVar1[0xcc] = 0;
  plVar1[0xcd] = 0;
  plVar1[0x9a] = 0;
  plVar1[0x9b] = 0;
  plVar1[0x68] = 0;
  plVar1[0x69] = 0;
  plVar1[0xce] = 0;
  plVar1[0xcf] = 0;
  plVar1[0x9c] = 0;
  plVar1[0x9d] = 0;
  plVar1[0x6a] = 0;
  plVar1[0x6b] = 0;
  return plVar1;
}


