// Function : processParameterChanges
// Namespace: juce:JuceVST3Component
// Entry    : 001b0b80
// Prototype: long processParameterChanges(JuceVST3Component * this, long * param_1)
// Body     : 001b0b80 - 001b0d42


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3Component::processParameterChanges(Steinberg::Vst::IParameterChanges&) */

long __thiscall
juce::JuceVST3Component::processParameterChanges(JuceVST3Component *this,long *param_1)

{
  AudioProcessorParameter *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_60 [2];
  double local_58;
  JuceVST3Component *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = this;
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = (int)lVar4;
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      plVar5 = (long *)(**(code **)(*param_1 + 0x20))(param_1,iVar8);
      lVar4 = 0;
      if (plVar5 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
        iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
        local_60[0] = 0;
        local_58 = 0.0;
        lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5,iVar3 + -1,local_60,&local_58);
        if ((int)lVar4 == 0) {
          lVar4 = *(long *)(local_50 + 0x78);
          lVar7 = *(long *)(lVar4 + 0x150);
          if (lVar7 != 0) {
            lVar4 = lVar4 + 0x148;
            lVar6 = lVar4;
            do {
              plVar5 = (long *)(lVar7 + 0x18);
              if (uVar2 <= *(uint *)(lVar7 + 0x20)) {
                plVar5 = (long *)(lVar7 + 0x10);
                lVar6 = lVar7;
              }
              lVar7 = *plVar5;
            } while (lVar7 != 0);
            if (lVar6 != lVar4) {
              if (uVar2 < *(uint *)(lVar6 + 0x20)) {
                lVar6 = lVar4;
              }
              if ((lVar6 != lVar4) &&
                 (this_00 = *(AudioProcessorParameter **)(lVar6 + 0x28),
                 this_00 != (AudioProcessorParameter *)0x0)) {
                local_48 = CONCAT44((int)((ulong)local_58 >> 0x20),(float)local_58);
                uStack_40 = 0;
                lVar4 = (**(code **)(*(long *)this_00 + 0x10))(this_00);
                fVar10 = (float)((uint)extraout_XMM0_Da & _DAT_005d91c0);
                if ((fVar10 == DAT_005d94c8) ||
                   (fVar11 = (float)((uint)(float)local_48 & _DAT_005d91c0), fVar11 == DAT_005d94c8)
                   ) {
                  if ((extraout_XMM0_Da != (float)local_48) ||
                     (NAN(extraout_XMM0_Da) || NAN((float)local_48))) {
LAB_001b0d02:
                    lVar4 = __tls_get_addr(&PTR_007153d8);
                    *(undefined1 *)(lVar4 + 8) = 1;
                    /* try { // try from 001b0d18 to 001b0d24 has its CatchHandler @ 001b0d43 */
                    AudioProcessorParameter::setValueNotifyingHost((float)local_48,this_00);
                    *(undefined1 *)(lVar4 + 8) = 0;
                  }
                }
                else {
                  fVar9 = (float)((uint)(extraout_XMM0_Da - (float)local_48) & _DAT_005d91c0);
                  if (DAT_005d94cc < fVar9) {
                    if (fVar11 <= fVar10) {
                      fVar11 = fVar10;
                    }
                    if (fVar11 * DAT_005d94d0 < fVar9) goto LAB_001b0d02;
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  return lVar4;
}


