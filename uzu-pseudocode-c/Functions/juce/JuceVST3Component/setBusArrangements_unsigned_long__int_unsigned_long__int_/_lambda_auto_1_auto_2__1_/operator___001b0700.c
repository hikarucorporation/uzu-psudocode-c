// Function : operator()
// Namespace: juce:JuceVST3Component:setBusArrangements_unsigned_long__int_unsigned_long__int_:_lambda_auto_1_auto_2__1_
// Entry    : 001b0700
// Prototype: undefined8 * operator()(undefined8 * param_1, undefined8 param_2, ulong * param_3, ulong * param_4)
// Body     : 001b0700 - 001b0916


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::optional<juce::Array<juce::AudioChannelSet, juce::DummyCriticalSection, 0> >
   juce::JuceVST3Component::setBusArrangements(unsigned long*, int, unsigned long*,
   int)::{lambda(auto:1, auto:2)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long*, unsigned long*) const
    */

undefined8 * __cdecl
juce::JuceVST3Component::setBusArrangements(unsigned_long*,int,unsigned_long*,int)::
{lambda(auto:1,auto:2)#1}::operator()
          (undefined8 *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  char cVar1;
  uint uVar2;
  BigInteger *pBVar3;
  uint uVar4;
  BigInteger *pBVar5;
  BigInteger *this;
  long lVar6;
  bool bVar7;
  int iStack_8c;
  BigInteger *local_88;
  juce local_60 [40];
  char local_38;
  
  iStack_8c = 0;
  if (param_3 == param_4) {
    iStack_8c = 0;
    uVar4 = 0;
    pBVar3 = (BigInteger *)0x0;
  }
  else {
    local_88 = (BigInteger *)0x0;
    uVar4 = 0;
    do {
      getChannelSetForSpeakerArrangement(local_60,*param_3);
      cVar1 = local_38;
      pBVar3 = local_88;
      if (local_38 == '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
joined_r0x001b08be:
        if (0 < iStack_8c) {
          lVar6 = 0;
          pBVar5 = pBVar3;
          do {
            BigInteger::~BigInteger(pBVar5);
            lVar6 = lVar6 + 1;
            pBVar5 = pBVar5 + 0x28;
          } while (lVar6 < iStack_8c);
        }
        goto LAB_001b08f5;
      }
      if (((int)uVar4 <= iStack_8c) &&
         (uVar2 = ((iStack_8c - (iStack_8c + 1 >> 0x1f)) + 1 >> 1) + iStack_8c + 9U & 0xfffffff8,
         bVar7 = uVar4 != uVar2, uVar4 = uVar2, bVar7)) {
        if ((int)uVar2 < 1) {
          free(local_88);
          pBVar3 = (BigInteger *)0x0;
        }
        else {
          pBVar3 = malloc((ulong)uVar2 * 0x28);
          if (0 < iStack_8c) {
            lVar6 = 0;
            pBVar5 = local_88;
            this = pBVar3;
            do {
              BigInteger::BigInteger(this,(undefined8 *)pBVar5);
              BigInteger::~BigInteger(pBVar5);
              lVar6 = lVar6 + 1;
              pBVar5 = pBVar5 + 0x28;
              this = this + 0x28;
            } while (lVar6 < iStack_8c);
          }
          free(local_88);
        }
      }
      lVar6 = (long)iStack_8c;
      iStack_8c = iStack_8c + 1;
                    /* try { // try from 001b0849 to 001b0852 has its CatchHandler @ 001b0917 */
      BigInteger::BigInteger(pBVar3 + lVar6 * 0x28,(long *)local_60);
      if (local_38 != '\0') {
        local_38 = '\0';
        BigInteger::~BigInteger((BigInteger *)local_60);
      }
      if (cVar1 == '\0') goto joined_r0x001b08be;
      param_3 = param_3 + 1;
      local_88 = pBVar3;
    } while (param_3 != param_4);
  }
  *param_1 = pBVar3;
  *(uint *)(param_1 + 1) = uVar4;
  *(int *)((long)param_1 + 0xc) = iStack_8c;
  *(undefined1 *)(param_1 + 2) = 1;
  pBVar3 = (BigInteger *)0x0;
LAB_001b08f5:
  free(pBVar3);
  return param_1;
}


