// Function : drawScrollbar
// Namespace: juce:LookAndFeel_V3
// Entry    : 00290240
// Prototype: undefined drawScrollbar(undefined8 param_1_00, Graphics * param_2, Component * param_3, int param_4, int param_5, int param_6, int param_7, char param_8, int param_9, int param_10, byte param_11, byte param_12)
// Body     : 00290240 - 00290542


/* juce::LookAndFeel_V3::drawScrollbar(juce::Graphics&, juce::ScrollBar&, int, int, int, int, bool,
   int, int, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawScrollbar
          (undefined8 param_1_00,Graphics *param_2,Component *param_3,int param_4,int param_5,
          int param_6,int param_7,char param_8,int param_9,int param_10,byte param_11,byte param_12)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_70 [2];
  float *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (float *)0x0;
  uStack_60 = 0;
  local_48 = 1;
  if (0 < param_10) {
    iVar7 = param_7;
    if (param_8 != '\0') {
      iVar7 = param_6;
    }
    fVar9 = (float)iVar7 * DAT_0065b200;
    fVar10 = fVar9 + fVar9;
    if (param_8 == '\0') {
      fVar8 = (float)param_10 - fVar10;
      fVar10 = (float)param_7 - fVar10;
      param_4 = param_9;
      param_9 = param_5;
      fVar1 = fVar10;
    }
    else {
      fVar8 = (float)param_6 - fVar10;
      fVar10 = (float)param_10 - fVar10;
      fVar1 = fVar8;
    }
    Path::addRoundedRectangle
              ((float)param_4 + fVar9,(float)param_9 + fVar9,fVar8,fVar10,DAT_005d9044 * fVar1,
               DAT_005d9044 * fVar1,(Path *)&local_68,1,'\x01','\x01','\x01');
  }
                    /* try { // try from 00290329 to 00290463 has its CatchHandler @ 00290545 */
  uVar5 = Component::findColour(param_3,0x1000400,'\x01');
  local_70[0] = (uint)uVar5;
  if ((param_12 | param_11) == 1) {
    fVar9 = (float)((uint)(uVar5 >> 0x18) & 0xff);
    iVar3 = SUB84((double)(fVar9 + fVar9) + DAT_005d9098,0);
    iVar7 = 0xff;
    if (iVar3 < 0xff) {
      iVar7 = iVar3;
    }
    local_70[0] = local_70[0] & 0xffffff | iVar7 << 0x18;
  }
  Graphics::setColour(param_2,local_70[0]);
  cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_60._4_4_ != 0)) {
    pfVar6 = local_68;
    do {
      fVar9 = *pfVar6;
      if ((fVar9 != DAT_005de3d0) || (NAN(fVar9) || NAN(DAT_005de3d0))) {
        if ((fVar9 != DAT_005de3d4) || (NAN(fVar9) || NAN(DAT_005de3d4))) {
          if (((fVar9 != DAT_005de3d8) || (NAN(fVar9) || NAN(DAT_005de3d8))) &&
             ((fVar9 != DAT_005de3dc || (NAN(fVar9) || NAN(DAT_005de3dc))))) goto LAB_002903e4;
        }
        local_38 = ZEXT416(DAT_005d9038);
        local_28 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_68,local_38);
        break;
      }
      pfVar6 = pfVar6 + 2;
LAB_002903e4:
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != local_68 + uStack_60._4_4_);
  }
  if ((param_12 | param_11) == 0) {
    fVar9 = DAT_005d9068;
  }
  else {
    fVar9 = DAT_005d9070;
  }
  uVar4 = Colour::contrasting(fVar9,(Colour *)local_70);
  Graphics::setColour(param_2,uVar4);
  local_20 = 0x3f800000;
  local_18 = 0;
  local_38 = ZEXT416(DAT_005d9038);
  local_28 = 0x3f800000;
                    /* try { // try from 00290492 to 00290528 has its CatchHandler @ 00290543 */
  cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_60._4_4_ != 0)) {
    pfVar6 = local_68;
    do {
      fVar9 = *pfVar6;
      if ((fVar9 != DAT_005de3d0) || (NAN(fVar9) || NAN(DAT_005de3d0))) {
        if ((fVar9 != DAT_005de3d4) || (NAN(fVar9) || NAN(DAT_005de3d4))) {
          if (((fVar9 != DAT_005de3d8) || (NAN(fVar9) || NAN(DAT_005de3d8))) &&
             ((fVar9 != DAT_005de3dc || (NAN(fVar9) || NAN(DAT_005de3dc))))) goto LAB_002904e4;
        }
        (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                  (*(long **)(param_2 + 8),&local_68,&local_20,local_38);
        break;
      }
      pfVar6 = pfVar6 + 2;
LAB_002904e4:
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != local_68 + uStack_60._4_4_);
  }
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return;
}


