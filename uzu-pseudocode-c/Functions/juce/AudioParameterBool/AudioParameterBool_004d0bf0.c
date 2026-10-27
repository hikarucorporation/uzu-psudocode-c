// Function : AudioParameterBool
// Namespace: juce:AudioParameterBool
// Entry    : 004d0bf0
// Prototype: undefined AudioParameterBool(AudioParameterBool * this, long * param_1, long * param_2, byte param_3, long * param_4)
// Body     : 004d0bf0 - 004d0e28


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioParameterBool::AudioParameterBool(juce::ParameterID const&, juce::String const&, bool,
   juce::AudioParameterBoolAttributes const&) */

void __thiscall
juce::AudioParameterBool::AudioParameterBool
          (AudioParameterBool *this,long *param_1,long *param_2,byte param_3,long *param_4)

{
  AudioParameterBool *pAVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  pthread_mutexattr_t apStack_38 [2];
  
  lVar2 = param_1[1];
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(int *)(this + 0xc) = (int)lVar2;
  pthread_mutexattr_init(apStack_38);
  pthread_mutexattr_settype(apStack_38,1);
  pthread_mutexattr_setprotocol(apStack_38,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),apStack_38);
  pthread_mutexattr_destroy(apStack_38);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__AudioProcessorParameterWithID_00714588;
  lVar2 = *param_1;
  *(long *)(this + 0x60) = lVar2;
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  lVar2 = *param_2;
  *(long *)(this + 0x68) = lVar2;
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  lVar2 = *param_4;
  *(long *)(this + 0x70) = lVar2;
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  *(int *)(this + 0x78) = (int)param_4[1];
  this[0x7c] = *(AudioParameterBool *)((long)param_4 + 0xc);
  this[0x7d] = *(AudioParameterBool *)((long)param_4 + 0xd);
  this[0x7e] = *(AudioParameterBool *)((long)param_4 + 0xe);
  *(undefined ***)this = &PTR__AudioParameterBool_007147a0;
  uVar3 = _UNK_005d94a8;
  *(undefined8 *)(this + 0x80) = _DAT_005d94a0;
  *(undefined8 *)(this + 0x88) = uVar3;
  this[0x90] = (AudioParameterBool)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = DAT_005d9038;
  }
  *(undefined4 *)(this + 0xf8) = uVar6;
  *(float *)(this + 0xfc) = (float)param_3;
  pAVar1 = this + 0x100;
  if (param_4[4] == 0) {
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(code **)(this + 0x118) =
         std::
         _Function_handler<juce::String(bool,int),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_11>
         ::_M_invoke;
    pcVar4 = std::
             _Function_handler<juce::String(bool,int),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_11>
             ::_M_manager;
  }
  else {
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x108) = 0;
    if ((code *)param_4[4] == (code *)0x0) goto LAB_004d0db6;
                    /* try { // try from 004d0d78 to 004d0d81 has its CatchHandler @ 004d0e70 */
    (*(code *)param_4[4])(pAVar1,param_4 + 2,2);
    *(long *)(this + 0x118) = param_4[5];
    pcVar4 = (code *)param_4[4];
  }
  *(code **)(this + 0x110) = pcVar4;
LAB_004d0db6:
  pAVar1 = this + 0x120;
  if (param_4[8] == 0) {
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(code **)(this + 0x138) =
         std::
         _Function_handler<bool(juce::String_const&),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_12>
         ::_M_invoke;
    pcVar4 = std::
             _Function_handler<bool(juce::String_const&),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_12>
             ::_M_manager;
  }
  else {
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x128) = 0;
    if ((code *)param_4[8] == (code *)0x0) {
      return;
    }
                    /* try { // try from 004d0ddc to 004d0de5 has its CatchHandler @ 004d0e29 */
    (*(code *)param_4[8])(pAVar1,param_4 + 6,2);
    *(long *)(this + 0x138) = param_4[9];
    pcVar4 = (code *)param_4[8];
  }
  *(code **)(this + 0x130) = pcVar4;
  return;
}


