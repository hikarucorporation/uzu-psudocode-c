// Function : getTextFromValue
// Namespace: juce:Slider
// Entry    : 002e4c00
// Prototype: long * getTextFromValue(undefined * param_1, long * param_2, long param_3)
// Body     : 002e4c00 - 002e4de4


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Slider::getTextFromValue(double) */

long * __cdecl juce::Slider::getTextFromValue(undefined *param_1,long *param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  double dVar6;
  int *piVar7;
  String *pSVar8;
  double dVar9;
  byte *pbVar10;
  long local_98;
  undefined *local_90;
  undefined *local_88 [3];
  byte local_6b [27];
  locale local_50 [8];
  byte local_48 [48];
  
  if (*(long *)(param_3 + 400) == 0) {
    uVar4 = *(uint *)(*(long *)(param_3 + 0x1a0) + 0x21c);
    if (uVar4 == 0xffffffff) {
      uVar4 = *(uint *)(*(long *)(param_3 + 0x1a0) + 0x218);
    }
    local_90 = param_1;
    if ((int)uVar4 < 1) {
      iVar3 = SUB84((double)param_1 + DAT_005d9098,0);
      if (iVar3 < 0) {
        pbVar10 = local_6b + 1;
        uVar4 = -iVar3;
        do {
          *pbVar10 = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
          pbVar10 = pbVar10 + -1;
          bVar2 = 9 < uVar4;
          uVar4 = uVar4 / 10;
        } while (bVar2);
        *pbVar10 = 0x2d;
      }
      else {
        pbVar10 = local_6b + 2;
        dVar6 = (double)param_1 + DAT_005d9098;
        do {
          uVar4 = SUB84(dVar6,0);
          dVar9 = (double)(((ulong)dVar6 & 0xffffffff) / 10);
          pbVar10[-1] = SUB81(dVar6,0) + SUB81(dVar9,0) * -10 | 0x30;
          pbVar10 = pbVar10 + -1;
          dVar6 = dVar9;
        } while (9 < uVar4);
      }
      local_6b[2] = 0;
      pbVar5 = local_6b + ~(ulong)pbVar10 + 3;
    }
    else {
                    /* try { // try from 002e4c5d to 002e4c6b has its CatchHandler @ 002e4e0a */
      NumberToStringConverters::StackArrayStream::StackArrayStream
                ((StackArrayStream *)local_88,(long)local_48);
                    /* try { // try from 002e4c6c to 002e4c7f has its CatchHandler @ 002e4de5 */
      pbVar5 = (byte *)NumberToStringConverters::StackArrayStream::writeDouble
                                 ((double)local_90,(StackArrayStream *)local_88,uVar4,'\0');
      local_88[0] = PTR_vtable_00715ca8 + 0x10;
      std::locale::~locale(local_50);
      pbVar10 = local_48;
    }
    local_98 = StringHolderUtils::createFromFixedLength(pbVar10,(long)pbVar5);
  }
  else {
    local_88[0] = param_1;
    (**(code **)(param_3 + 0x198))(&local_98,param_3 + 0x180,local_88);
  }
  local_88[0] = *(undefined **)(*(long *)(param_3 + 0x1a0) + 0x210);
  piVar7 = (int *)(local_88[0] + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
                    /* try { // try from 002e4d77 to 002e4d83 has its CatchHandler @ 002e4e12 */
  pSVar8 = juce::String::operator+=((String *)&local_98,(String *)local_88);
  lVar1 = *(long *)pSVar8;
  *param_2 = lVar1;
  piVar7 = (int *)(lVar1 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  piVar7 = (int *)(local_88[0] + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_98 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar7);
    }
  }
  return param_2;
}


