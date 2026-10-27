// Function : AudioParameterFloat
// Namespace: juce:AudioParameterFloat
// Entry    : 004cf840
// Prototype: undefined AudioParameterFloat(undefined4 param_1_00, AudioParameterFloat * this, long * param_3, long * param_4, undefined8 * param_5, long * param_6)
// Body     : 004cf840 - 004cfc46


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::AudioParameterFloatAttributes const&) */

void __thiscall
juce::AudioParameterFloat::AudioParameterFloat
          (undefined4 param_1_00,AudioParameterFloat *this,long *param_3,long *param_4,
          undefined8 *param_5,long *param_6)

{
  float __x;
  uint uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  pthread_mutexattr_t local_38 [2];
  
  lVar3 = param_3[1];
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(int *)(this + 0xc) = (int)lVar3;
  pthread_mutexattr_init(local_38);
  pthread_mutexattr_settype(local_38,1);
  pthread_mutexattr_setprotocol(local_38,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),local_38);
  pthread_mutexattr_destroy(local_38);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__AudioProcessorParameterWithID_00714588;
  lVar3 = *param_3;
  *(long *)(this + 0x60) = lVar3;
  piVar2 = (int *)(lVar3 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  lVar3 = *param_4;
  *(long *)(this + 0x68) = lVar3;
  piVar2 = (int *)(lVar3 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  lVar3 = *param_6;
  *(long *)(this + 0x70) = lVar3;
  piVar2 = (int *)(lVar3 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(int *)(this + 0x78) = (int)param_6[1];
  this[0x7c] = *(AudioParameterFloat *)((long)param_6 + 0xc);
  this[0x7d] = *(AudioParameterFloat *)((long)param_6 + 0xd);
  this[0x7e] = *(AudioParameterFloat *)((long)param_6 + 0xe);
  *(undefined ***)this = &PTR__AudioParameterFloat_00714630;
                    /* try { // try from 004cf943 to 004cf94d has its CatchHandler @ 004cfcbc */
  NormalisableRange<float>::NormalisableRange((NormalisableRange<float> *)(this + 0x80),param_5);
  *(undefined4 *)(this + 0xf8) = param_1_00;
  *(undefined4 *)(this + 0xfc) = param_1_00;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  if ((code *)param_6[4] == (code *)0x0) {
    lVar3 = 0;
  }
  else {
                    /* try { // try from 004cf988 to 004cf991 has its CatchHandler @ 004cfc8e */
    (*(code *)param_6[4])(this + 0x100,param_6 + 2,2);
    *(long *)(this + 0x118) = param_6[5];
    lVar3 = param_6[4];
    *(long *)(this + 0x110) = lVar3;
  }
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  if ((code *)param_6[8] == (code *)0x0) {
    lVar5 = 0;
  }
  else {
                    /* try { // try from 004cf9d1 to 004cf9da has its CatchHandler @ 004cfc47 */
    (*(code *)param_6[8])(this + 0x120,param_6 + 6,2);
    *(long *)(this + 0x138) = param_6[9];
    lVar5 = param_6[8];
    *(long *)(this + 0x130) = lVar5;
    lVar3 = *(long *)(this + 0x110);
  }
  if (lVar3 != 0) goto joined_r0x004cfc19;
  __x = *(float *)(this + 0x88);
  fVar8 = (float)(_DAT_005d91c0 & (uint)__x);
  if (fVar8 == DAT_005d94c8) {
    uVar1 = 7;
    if ((__x != 0.0) || (NAN(__x))) goto LAB_004cfa76;
  }
  else {
    uVar1 = 7;
    if ((DAT_005d94cc < fVar8) && (DAT_005d94d0 * fVar8 < fVar8)) {
LAB_004cfa76:
      fVar8 = floorf(__x);
      fVar8 = __x - fVar8;
      fVar7 = (float)(_DAT_005d91c0 & (uint)fVar8);
      uVar1 = 0;
      if (fVar7 == DAT_005d94c8) {
        if ((fVar8 != 0.0) || (NAN(fVar8))) goto LAB_004cfad4;
      }
      else if ((DAT_005d94cc < fVar7) && (DAT_005d94d0 * fVar7 < fVar7)) {
LAB_004cfad4:
        uVar1 = SUB84((double)__x * _DAT_005de6c0 + DAT_005d9098,0);
        uVar4 = -uVar1;
        if ((int)uVar4 < 0) {
          uVar4 = uVar1;
        }
        uVar1 = 7;
        if (((((uVar4 * -0x33333333 >> 1 | (uint)((uVar4 * -0x33333333 & 1) != 0) << 0x1f) <
               0x1999999a) &&
             (uVar6 = (uVar4 / 10) * -0x33333333, uVar1 = 6,
             (uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a)) &&
            (uVar6 = (uVar4 / 100) * -0x33333333, uVar1 = 5,
            (uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a)) &&
           (((uVar6 = (uVar4 / 1000) * -0x33333333, uVar1 = 4,
             (uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a &&
             (uVar6 = (uVar4 / 10000) * -0x33333333, uVar1 = 3,
             (uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a)) &&
            (uVar6 = (uVar4 / 100000) * -0x33333333, uVar1 = 2,
            (uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a)))) {
          uVar1 = (uVar4 / 1000000) * -0x33333333;
          uVar1 = (uint)(0x19999999 < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f));
        }
      }
    }
  }
  *(uint *)(this + 0x100) = uVar1;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(code **)(this + 0x110) =
       std::
       _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>
       ::_M_manager;
  *(code **)(this + 0x118) =
       std::
       _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>
       ::_M_invoke;
joined_r0x004cfc19:
  if (lVar5 == 0) {
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(code **)(this + 0x130) =
         std::
         _Function_handler<float(juce::String_const&),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_6>
         ::_M_manager;
    *(code **)(this + 0x138) =
         std::
         _Function_handler<float(juce::String_const&),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_6>
         ::_M_invoke;
  }
  return;
}


