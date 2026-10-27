// Function : nonConstDraw
// Namespace: juce:Drawable
// Entry    : 002843e0
// Prototype: undefined nonConstDraw(Component * param_1, long param_2, float * param_3_00)
// Body     : 002843e0 - 002846ef


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Drawable::nonConstDraw(juce::Graphics&, float, juce::AffineTransform const&) */

void __cdecl juce::Drawable::nonConstDraw(Component *param_1,long param_2,float *param_3_00)

{
  Component CVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(undefined1 *)(param_2 + 0x10) = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  pfVar4 = *(float **)(param_1 + 0x50);
  if (pfVar4 == (float *)0x0) {
    fVar6 = 0.0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar12 = DAT_005d9038;
    fVar11 = DAT_005d9038;
  }
  else {
    fVar6 = pfVar4[1];
    fVar10 = pfVar4[2];
    fVar7 = pfVar4[3];
    fVar5 = pfVar4[5];
    fVar12 = *pfVar4;
    fVar11 = pfVar4[4];
  }
  fVar8 = fVar6 * 0.0 + fVar12;
  fVar9 = fVar12 * 0.0 + fVar6;
  fVar10 = fVar10 + fVar12 * (float)-*(int *)(param_1 + 0xf0) +
                    fVar6 * (float)-*(int *)(param_1 + 0xf4);
  fVar12 = fVar11 * 0.0 + fVar7;
  fVar13 = fVar7 * 0.0 + fVar11;
  fVar5 = fVar7 * (float)-*(int *)(param_1 + 0xf0) + fVar11 * (float)-*(int *)(param_1 + 0xf4) +
          fVar5;
  fVar6 = *param_3_00;
  fVar7 = param_3_00[1];
  local_60 = fVar6 * fVar8 + fVar7 * fVar12;
  fStack_5c = fVar6 * fVar9 + fVar7 * fVar13;
  local_58 = fVar6 * fVar10 + fVar7 * fVar5 + param_3_00[2];
  fVar6 = param_3_00[3];
  fVar7 = param_3_00[4];
  local_54 = fVar8 * fVar6 + fVar12 * fVar7;
  local_50 = fVar9 * fVar6 + fVar13 * fVar7;
  local_4c = fVar10 * fVar6 + fVar5 * fVar7 + param_3_00[5];
  *(undefined1 *)(param_2 + 0x10) = 0;
                    /* try { // try from 0028456a to 0028457b has its CatchHandler @ 0028470f */
  (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(*(long **)(param_2 + 8),&local_60);
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
                    /* try { // try from 0028458f to 00284599 has its CatchHandler @ 00284711 */
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x1a0))(&local_60);
    pfVar4 = (float *)CONCAT44(fStack_5c,local_60);
    if ((long)(int)local_54 != 0) {
      pfVar3 = pfVar4;
      do {
        fVar5 = *pfVar3;
        if ((fVar5 != DAT_005de3d0) || (NAN(fVar5) || NAN(DAT_005de3d0))) {
          if ((fVar5 != DAT_005de3d4) || (NAN(fVar5) || NAN(DAT_005de3d4))) {
            if (((fVar5 != DAT_005de3d8) || (NAN(fVar5) || NAN(DAT_005de3d8))) &&
               ((fVar5 != DAT_005de3dc || (NAN(fVar5) || NAN(DAT_005de3dc))))) goto LAB_002845e4;
          }
          local_38 = ZEXT416((uint)DAT_005d9038);
          local_28 = 0x3f800000;
                    /* try { // try from 0028462a to 00284636 has its CatchHandler @ 002846f0 */
          (**(code **)(**(long **)(param_2 + 8) + 0x48))(*(long **)(param_2 + 8),&local_60,local_38)
          ;
          pfVar4 = (float *)CONCAT44(fStack_5c,local_60);
          break;
        }
        pfVar3 = pfVar3 + 2;
LAB_002845e4:
        pfVar3 = pfVar3 + 1;
      } while (pfVar3 != pfVar4 + (int)local_54);
    }
    local_54 = 0.0;
    free(pfVar4);
  }
                    /* try { // try from 00284650 to 002846cd has its CatchHandler @ 00284711 */
  cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if (cVar2 == '\0') {
    CVar1 = param_1[0xea];
    if (((byte)CVar1 & 0xc) != 0) {
      *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_1 + 0xe8);
      param_1[0xea] = (Component)((byte)CVar1 & 0xf3);
      Component::sendMovedResizedMessages(param_1,(byte)CVar1 >> 2 & 1,(byte)CVar1 >> 3 & 1);
    }
    if (*(EffectState **)(param_1 + 0x80) == (EffectState *)0x0) {
      Component::paintComponentAndChildren(param_1,param_2);
    }
    else {
      Component::EffectState::paint(*(EffectState **)(param_1 + 0x80),param_2,param_1,1);
    }
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
                    /* try { // try from 002846e3 to 002846e5 has its CatchHandler @ 00284707 */
    (**(code **)(**(long **)(param_2 + 8) + 0x78))();
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}


