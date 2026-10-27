// Function : readStringUtf8
// Namespace: Steinberg:FStreamer
// Entry    : 00179eb0
// Prototype: uint readStringUtf8(FStreamer * this, undefined2 * param_1, int param_2)
// Body     : 00179eb0 - 0017a013


/* Steinberg::FStreamer::readStringUtf8(char16_t*, int) */

uint __thiscall
Steinberg::FStreamer::readStringUtf8(FStreamer *this,undefined2 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *__ptr;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  char local_55;
  int local_54;
  undefined **local_50;
  short *local_48;
  undefined8 uStack_40;
  uint local_38;
  
  local_55 = '\0';
  *param_1 = 0;
  local_50 = &PTR__Buffer_00702ba0;
  local_48 = (short *)0x0;
  uStack_40 = 0;
  local_38 = 0x400;
  local_54 = param_2;
  do {
                    /* try { // try from 00179f1a to 00179f27 has its CatchHandler @ 0017a019 */
    lVar5 = (**(code **)(*(long *)this + 0x10))(this,&local_55,1);
    cVar1 = local_55;
    if (lVar5 != 1) break;
    uVar4 = uStack_40._4_4_ + 1;
    if ((uint)uStack_40 < uVar4) {
      uVar7 = (ulong)local_38;
      if (local_38 == 0) {
        uVar7 = 0x1000;
      }
      local_38 = (uint)uVar7;
      bVar3 = Buffer::setSize((Buffer *)&local_50,
                              (uStack_40._4_4_ + local_38) -
                              (int)((ulong)(uStack_40._4_4_ + local_38) % uVar7));
      if (bVar3) {
        uVar4 = uStack_40._4_4_ + 1;
        goto LAB_00179f00;
      }
    }
    else {
LAB_00179f00:
      uVar7 = (ulong)uStack_40._4_4_;
      uStack_40 = CONCAT44(uVar4,(uint)uStack_40);
      *(char *)((long)local_48 + uVar7) = cVar1;
    }
  } while (local_55 != '\0');
  __ptr = local_48;
  iVar2 = local_54;
  if (uStack_40._4_4_ < 3) {
    iVar6 = 0;
    psVar8 = local_48;
    if (uStack_40._4_4_ != 2) goto LAB_00179fc8;
  }
  else {
    bVar3 = (char)local_48[1] == -0x41;
    iVar6 = 0xfde9;
    if (!bVar3 || *local_48 != -0x4411) {
      iVar6 = 0;
    }
    psVar8 = (short *)((ulong)(bVar3 && *local_48 == -0x4411) * 3 + (long)local_48);
  }
                    /* try { // try from 00179fbe to 00179fc7 has its CatchHandler @ 0017a014 */
  ConstString::multiByteToWideString(param_1,(char *)psVar8,local_54,iVar6);
LAB_00179fc8:
  param_1[(long)iVar2 + -1] = 0;
  uVar7 = 0;
  do {
    psVar8 = (short *)((long)param_1 + uVar7);
    uVar7 = uVar7 + 2;
  } while (*psVar8 != 0);
  if (__ptr != (short *)0x0) {
    free(__ptr);
  }
  return ((uint)(uVar7 >> 1) & 0x7fffffff) - 1 & 0x3fffffff;
}


