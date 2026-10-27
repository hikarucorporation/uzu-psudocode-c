// Function : oscformat_format
// Namespace: 
// Entry    : 0057fd40
// Prototype: undefined oscformat_format(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0057fd40 - 0057fd8d


void oscformat_format(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_10;
  uVar3 = CONCAT71((int7)((ulong)param_12 >> 8),*pbVar4);
  uVar2 = (int)uVar3 - 0x62;
  bVar1 = (byte)uVar2;
  while ((bVar1 < 0x12 && ((0x20091UL >> ((ulong)(uVar2 & 0xff) & 0x3f) & 1) != 0))) {
    pbVar4 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4;
    uVar2 = *pbVar4 - 0x62;
    bVar1 = (byte)uVar2;
  }
  if ((char)uVar3 == '\0') {
    *(undefined8 **)(param_9 + 0x40) = param_10;
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "oscformat \'%s\' may only contain \'f\', \'i\'. \'s\', and/or \'b\'",pbVar4,uVar3,
           (char *)0x20091,param_14);
  return;
}


