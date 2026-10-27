// Function : strokePath
// Namespace: juce:Graphics
// Entry    : 0032c2b0
// Prototype: undefined strokePath(Graphics * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 0032c2b0 - 0032c36c


/* juce::Graphics::strokePath(juce::Path const&, juce::PathStrokeType const&, juce::AffineTransform
   const&) const */

void __thiscall
juce::Graphics::strokePath(Graphics *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if ((cVar3 == '\0') && ((long)*(int *)((long)param_1 + 0xc) != 0)) {
    pfVar4 = (float *)*param_1;
    pfVar1 = pfVar4 + *(int *)((long)param_1 + 0xc);
    do {
      fVar2 = *pfVar4;
      if ((fVar2 != DAT_005de3d0) || (NAN(fVar2) || NAN(DAT_005de3d0))) {
        if ((fVar2 == DAT_005de3d4) && (!NAN(fVar2) && !NAN(DAT_005de3d4))) {
LAB_0032c33d:
                    /* WARNING: Could not recover jumptable at 0x0032c35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(this + 8) + 0xd8))(*(long **)(this + 8),param_1,param_2,param_3);
          return;
        }
        if (((fVar2 == DAT_005de3d8) && (!NAN(fVar2) && !NAN(DAT_005de3d8))) ||
           ((fVar2 == DAT_005de3dc && (!NAN(fVar2) && !NAN(DAT_005de3dc))))) goto LAB_0032c33d;
      }
      else {
        pfVar4 = pfVar4 + 2;
      }
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != pfVar1);
  }
  return;
}


