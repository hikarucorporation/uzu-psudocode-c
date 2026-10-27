// Function : serialiseDouble
// Namespace: juce
// Entry    : 004abc30
// Prototype: undefined serialiseDouble(double param_1, juce * this, uint param_3)
// Body     : 004abc30 - 004abe96


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::serialiseDouble(double, int) */

void __thiscall juce::serialiseDouble(double param_1,juce *this,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  double dVar7;
  undefined *local_88 [7];
  locale local_50 [8];
  byte local_48 [56];
  
  dVar7 = (double)(_DAT_005d91b0 & (ulong)param_1);
  if ((_DAT_005de760 <= dVar7) || (dVar7 <= DAT_00652ba8)) {
                    /* try { // try from 004abce3 to 004abcf1 has its CatchHandler @ 004abef7 */
    NumberToStringConverters::StackArrayStream::StackArrayStream
              ((StackArrayStream *)local_88,(long)local_48);
    uVar6 = 0xf;
    if (0 < (int)param_3) {
      uVar6 = param_3;
    }
                    /* try { // try from 004abcfc to 004abd0e has its CatchHandler @ 004abed2 */
    lVar3 = NumberToStringConverters::StackArrayStream::writeDouble
                      (param_1,(StackArrayStream *)local_88,uVar6,'\x01');
    local_88[0] = PTR_vtable_00715ca8 + 0x10;
    std::locale::~locale(local_50);
    pbVar5 = (byte *)StringHolderUtils::createFromFixedLength(local_48,lVar3);
                    /* try { // try from 004abd3c to 004abd46 has its CatchHandler @ 004abead */
    reduceLengthOfFloatString(this,pbVar5);
  }
  else {
    if (((double)(int)param_1 == param_1) && (!NAN((double)(int)param_1) && !NAN(param_1))) {
                    /* try { // try from 004abc88 to 004abc96 has its CatchHandler @ 004abea5 */
      NumberToStringConverters::StackArrayStream::StackArrayStream
                ((StackArrayStream *)local_88,(long)local_48);
                    /* try { // try from 004abc97 to 004abcab has its CatchHandler @ 004abea3 */
      lVar3 = NumberToStringConverters::StackArrayStream::writeDouble
                        (param_1,(StackArrayStream *)local_88,1,'\0');
      local_88[0] = PTR_vtable_00715ca8 + 0x10;
      std::locale::~locale(local_50);
      uVar4 = StringHolderUtils::createFromFixedLength(local_48,lVar3);
      *(undefined8 *)this = uVar4;
      return;
    }
    if ((int)param_3 < 1) {
      if (_DAT_005d9000 <= dVar7) {
        if (DAT_006544a0 <= dVar7) {
          param_3 = 0xc;
          if (DAT_005db348 <= dVar7) {
            param_3 = dVar7 < DAT_005de6e8 | 10;
          }
        }
        else {
          param_3 = 0xf;
          if (_DAT_00655e08 <= dVar7) {
            param_3 = (dVar7 < DAT_005d90a0) + 0xd;
          }
        }
      }
      else if (DAT_00651e50 <= dVar7) {
        param_3 = 0x10;
        if (dVar7 < DAT_006524a0) {
          param_3 = (dVar7 < DAT_00651f48) + 0x11;
        }
      }
      else {
        param_3 = (dVar7 < DAT_00655918) + 0x13;
      }
    }
                    /* try { // try from 004abd51 to 004abd5f has its CatchHandler @ 004abe9b */
    NumberToStringConverters::StackArrayStream::StackArrayStream
              ((StackArrayStream *)local_88,(long)local_48);
                    /* try { // try from 004abd60 to 004abd71 has its CatchHandler @ 004abe99 */
    lVar3 = NumberToStringConverters::StackArrayStream::writeDouble
                      (param_1,(StackArrayStream *)local_88,param_3,'\0');
    local_88[0] = PTR_vtable_00715ca8 + 0x10;
    std::locale::~locale(local_50);
    pbVar5 = (byte *)StringHolderUtils::createFromFixedLength(local_48,lVar3);
                    /* try { // try from 004abd9f to 004abda9 has its CatchHandler @ 004abe97 */
    reduceLengthOfFloatString(this,pbVar5);
  }
  LOCK();
  pbVar1 = pbVar5 + -0x10;
  iVar2 = *(int *)pbVar1;
  *(int *)pbVar1 = *(int *)pbVar1 + -1;
  UNLOCK();
  if (iVar2 == 0) {
    operator_delete__(pbVar5 + -0x10);
    return;
  }
  return;
}


