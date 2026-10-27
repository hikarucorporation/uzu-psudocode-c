// Function : setBusArrangements
// Namespace: juce:JuceVST3Component
// Entry    : 001a9690
// Prototype: undefined8 setBusArrangements(JuceVST3Component * this, undefined8 param_1, undefined8 param_3_00, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a9690 - 001a9945


/* juce::JuceVST3Component::setBusArrangements(unsigned long*, int, unsigned long*, int) */

undefined8 __thiscall
juce::JuceVST3Component::setBusArrangements
          (JuceVST3Component *this,undefined8 param_1,undefined8 param_3_00,undefined8 param_3,
          uint *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_c0 [8];
  int local_b8;
  int local_b4;
  undefined1 *local_b0;
  undefined8 local_a8;
  int *local_a0;
  undefined8 local_98;
  int *local_90;
  CriticalSection *local_88;
  char local_80;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  char local_58;
  undefined8 local_50;
  undefined8 local_48;
  JuceVST3Component *local_40;
  int local_38;
  int local_34;
  void **local_30;
  
  local_b8 = (int)param_4;
  local_b4 = (int)param_3_00;
  local_50 = param_3;
  local_48 = param_1;
  FLStudioDIYSpecificationEnforcementLock::FLStudioDIYSpecificationEnforcementLock
            ((FLStudioDIYSpecificationEnforcementLock *)&local_88,(CriticalSection *)(this + 1000),
             param_3_00,param_3,param_4,param_5);
  uVar6 = 1;
  if (this[0x3e0] == (JuceVST3Component)0x0) {
    iVar1 = *(int *)(*(long *)(this + 0x68) + 0xcc);
    if (((int)param_3_00 <= iVar1) &&
       (iVar2 = *(int *)(*(long *)(this + 0x68) + 0xdc), (int)param_4 <= iVar2)) {
      local_b0 = local_c0;
      local_a8 = &local_48;
      local_a0 = &local_b4;
      local_98 = &local_50;
      local_90 = &local_b8;
                    /* try { // try from 001a9756 to 001a9764 has its CatchHandler @ 001a9957 */
      setBusArrangements(unsigned_long*,int,unsigned_long*,int)::{lambda()#1}::operator()
                ((_lambda___1_ *)&local_78,&local_b0);
      if (local_58 == '\0') {
        uVar6 = 1;
      }
      else {
                    /* try { // try from 001a9770 to 001a97b2 has its CatchHandler @ 001a995c */
        uVar6 = AudioProcessor::checkBusesLayoutSupported
                          (*(AudioProcessor **)(this + 0x68),(long)&local_78);
        if ((char)uVar6 == '\0') {
                    /* try { // try from 001a97e2 to 001a97f3 has its CatchHandler @ 001a9946 */
          local_40 = this;
          local_38 = iVar1;
          local_34 = iVar2;
          local_30 = &local_78;
          setBusArrangements(unsigned_long*,int,unsigned_long*,int)::{lambda()#2}::operator()
                    ((_lambda___2_ *)&local_b0,(long *)&local_40);
                    /* try { // try from 001a97f8 to 001a9818 has its CatchHandler @ 001a9948 */
          uVar3 = AudioProcessor::setBusesLayoutWithoutEnabling
                            (*(AudioProcessor **)(this + 0x68),&local_b0);
          if ((char)uVar3 != '\0') {
            ClientBufferMapper::updateFromProcessor
                      ((ClientBufferMapper *)(this + 0x120),*(long *)(this + 0x68));
          }
          if (0 < local_98._4_4_) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              BigInteger::~BigInteger((BigInteger *)((long)local_a0 + lVar4));
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + 0x28;
            } while (lVar5 < local_98._4_4_);
          }
          local_98 = (undefined8 *)((ulong)local_98 & 0xffffffff);
          free(local_a0);
          if (0 < local_a8._4_4_) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              BigInteger::~BigInteger((BigInteger *)(local_b0 + lVar4));
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + 0x28;
            } while (lVar5 < local_a8._4_4_);
          }
          local_a8 = (undefined8 *)((ulong)local_a8 & 0xffffffff);
          free(local_b0);
          uVar6 = 1;
        }
        else {
          uVar3 = AudioProcessor::setBusesLayoutWithoutEnabling
                            (*(AudioProcessor **)(this + 0x68),&local_78);
          uVar6 = 1;
          if ((char)uVar3 != '\0') {
            uVar6 = 0;
            ClientBufferMapper::updateFromProcessor
                      ((ClientBufferMapper *)(this + 0x120),*(long *)(this + 0x68));
          }
        }
        if (local_58 != '\0') {
          local_58 = '\0';
          if (0 < local_5c) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              BigInteger::~BigInteger((BigInteger *)((long)local_68 + lVar4));
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + 0x28;
            } while (lVar5 < local_5c);
          }
          local_5c = 0;
          free(local_68);
          if (0 < local_6c) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              BigInteger::~BigInteger((BigInteger *)((long)local_78 + lVar4));
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + 0x28;
            } while (lVar5 < local_6c);
          }
          local_6c = 0;
          free(local_78);
        }
      }
    }
  }
  if (local_80 != '\0') {
    local_80 = 0;
    CriticalSection::exit(local_88);
  }
  return uVar6;
}


