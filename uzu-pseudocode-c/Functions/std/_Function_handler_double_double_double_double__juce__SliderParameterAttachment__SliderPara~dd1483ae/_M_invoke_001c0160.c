// Function : _M_invoke
// Namespace: std:_Function_handler_double_double_double_double__juce__SliderParameterAttachment__SliderPara~dd1483ae
// Entry    : 001c0160
// Prototype: double _M_invoke(long * param_1, double * param_2, double * param_3, double * param_4)
// Body     : 001c0160 - 001c0297


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<double (double, double, double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_15>::_M_invoke(std::_Any_data const&, double&&, double&&,
   double&&) */

double __cdecl
std::
_Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_15>
::_M_invoke(long *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [16];
  
  pfVar3 = (float *)*param_1;
  dVar1 = *param_3;
  dVar2 = *param_4;
  local_1c = (float)*param_2;
  *pfVar3 = local_1c;
  local_20 = (float)dVar1;
  pfVar3[1] = local_20;
  local_24 = (float)dVar2;
  if (*(long *)(pfVar3 + 0x12) == 0) {
    fVar4 = (local_24 - local_1c) / (local_20 - local_1c);
    fVar5 = DAT_005d9038;
    if (fVar4 <= DAT_005d9038) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
    fVar4 = pfVar3[3];
    if ((fVar4 != DAT_005d9038) || (NAN(fVar4) || NAN(DAT_005d9038))) {
      if (*(char *)(pfVar3 + 4) == '\0') {
        fVar5 = powf(fVar5,fVar4);
        return (double)fVar5;
      }
      fVar5 = fVar5 + fVar5 + DAT_005d9054;
      local_18 = ZEXT416((uint)fVar5);
      fVar5 = powf((float)(_DAT_005d91c0 & (uint)fVar5),fVar4);
      return (double)(((float)(~-(uint)((float)local_18._0_4_ < 0.0) & (uint)DAT_005d9038 |
                              (uint)DAT_005d9054 & -(uint)((float)local_18._0_4_ < 0.0)) * fVar5 +
                      DAT_005d9038) * DAT_005d9044);
    }
  }
  else {
                    /* try { // try from 001c01ab to 001c01bc has its CatchHandler @ 001c0298 */
    fVar4 = (float)(**(code **)(pfVar3 + 0x14))(pfVar3 + 0xe,&local_1c,&local_20,&local_24);
    fVar5 = DAT_005d9038;
    if (fVar4 <= DAT_005d9038) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
  }
  return (double)fVar5;
}


