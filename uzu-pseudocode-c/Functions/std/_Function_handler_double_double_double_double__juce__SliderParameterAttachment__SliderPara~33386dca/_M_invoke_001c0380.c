// Function : _M_invoke
// Namespace: std:_Function_handler_double_double_double_double__juce__SliderParameterAttachment__SliderPara~33386dca
// Entry    : 001c0380
// Prototype: double _M_invoke(long * param_1, double * param_2, double * param_3, double * param_4)
// Body     : 001c0380 - 001c0453


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<double (double, double, double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_16>::_M_invoke(std::_Any_data const&, double&&, double&&,
   double&&) */

double __cdecl
std::
_Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_16>
::_M_invoke(long *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_18 [16];
  
  pfVar3 = (float *)*param_1;
  dVar1 = *param_3;
  dVar2 = *param_4;
  local_18._4_12_ = in_XMM3._4_12_;
  local_18._0_4_ = (float)*param_2;
  *pfVar3 = local_18._0_4_;
  local_28 = (float)dVar1;
  pfVar3[1] = local_28;
  local_34 = (float)dVar2;
  if (*(long *)(pfVar3 + 0x1a) == 0) {
    fVar4 = pfVar3[2];
    if (0.0 < fVar4) {
      fVar5 = floorf((local_34 - local_18._0_4_) / fVar4 + DAT_005d9044);
      local_34 = fVar5 * fVar4 + local_18._0_4_;
    }
    fVar4 = local_18._0_4_;
    if ((fVar4 < local_28) && (fVar4 < local_34)) {
      return (double)(float)(~-(uint)(local_28 <= local_34) & (uint)local_34 |
                            (uint)local_28 & -(uint)(local_28 <= local_34));
    }
  }
  else {
                    /* try { // try from 001c03c8 to 001c03d9 has its CatchHandler @ 001c0454 */
    local_30 = local_28;
    local_2c = local_18._0_4_;
    fVar4 = (float)(**(code **)(pfVar3 + 0x1c))(pfVar3 + 0x16,&local_2c,&local_30,&local_34);
  }
  return (double)fVar4;
}


