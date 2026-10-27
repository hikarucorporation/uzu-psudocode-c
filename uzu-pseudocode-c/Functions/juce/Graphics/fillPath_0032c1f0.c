// Function : fillPath
// Namespace: juce:Graphics
// Entry    : 0032c1f0
// Prototype: undefined fillPath(Graphics * this, undefined8 * param_1)
// Body     : 0032c1f0 - 0032c2ac


/* juce::Graphics::fillPath(juce::Path const&) const */

void __thiscall juce::Graphics::fillPath(Graphics *this,undefined8 *param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if ((cVar3 == '\0') && ((long)*(int *)((long)param_1 + 0xc) != 0)) {
    pfVar4 = (float *)*param_1;
    pfVar1 = pfVar4 + *(int *)((long)param_1 + 0xc);
    do {
      fVar2 = *pfVar4;
      if ((fVar2 != DAT_005de3d0) || (NAN(fVar2) || NAN(DAT_005de3d0))) {
        if ((fVar2 == DAT_005de3d4) && (!NAN(fVar2) && !NAN(DAT_005de3d4))) {
LAB_0032c27d:
          local_28 = ZEXT416(DAT_005d9038);
          local_18 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),param_1,local_28);
          return;
        }
        if (((fVar2 == DAT_005de3d8) && (!NAN(fVar2) && !NAN(DAT_005de3d8))) ||
           ((fVar2 == DAT_005de3dc && (!NAN(fVar2) && !NAN(DAT_005de3dc))))) goto LAB_0032c27d;
      }
      else {
        pfVar4 = pfVar4 + 2;
      }
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != pfVar1);
  }
  return;
}


