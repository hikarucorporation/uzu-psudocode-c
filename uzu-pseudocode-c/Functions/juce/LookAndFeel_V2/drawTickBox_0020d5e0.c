// Function : drawTickBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020d5e0
// Prototype: undefined drawTickBox(float param_1, float param_2, float param_3, float param_4, undefined8 param_5_00, Graphics * param_6, Component * param_7, char param_8, uint param_9, int param_10_00, char param_11)
// Body     : 0020d5e0 - 0020d8f9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawTickBox(juce::Graphics&, juce::Component&, float, float, float, float,
   bool, bool, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawTickBox
          (float param_1,float param_2,float param_3,float param_4,undefined8 param_5_00,
          Graphics *param_6,Component *param_7,char param_8,uint param_9,int param_10_00,
          char param_11)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  float local_58 [3];
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  fVar6 = (float)s_333_power__f_00652630._0_4_ * param_3;
  uVar2 = Component::findColour(param_7,0x1000100,'\0');
  if (param_9 == 0) {
    fVar7 = DAT_005d9044;
  }
  else {
    fVar7 = DAT_005d9038;
  }
  fVar8 = (param_4 - fVar6) * DAT_005d9044;
  iVar4 = SUB84((double)((float)((uint)(uVar2 >> 0x18) & 0xff) * fVar7) + DAT_005d9098,0);
  iVar5 = 0xff;
  if (iVar4 < 0xff) {
    iVar5 = iVar4;
  }
  local_88._0_4_ =
       Colour::withMultipliedSaturation(DAT_005de3e8,(uint)uVar2 & 0xffffff | iVar5 << 0x18);
  if ((param_10_00 != 0) || (fVar7 = DAT_005d9044, param_11 != '\0')) {
    if (param_11 == '\0') {
      fVar7 = DAT_005d9068;
    }
    else {
      fVar7 = DAT_005d9070;
    }
    local_88._0_4_ = Colour::contrasting(fVar7,(Colour *)&local_88);
    fVar7 = DAT_005de3ec;
  }
  if ((char)param_9 == '\0') {
    fVar7 = DAT_005d9088;
  }
  drawGlassSphere(param_1,fVar8 + param_2,fVar6,fVar7,param_6,(uint *)&local_88);
  if (param_8 != '\0') {
    local_88 = (float *)0x0;
    uStack_80 = 0;
    local_68 = 1;
    local_78 = _DAT_005dd030;
    uStack_70 = _UNK_005dd038;
    local_88 = malloc(0x20);
    local_88[0] = 100002.0;
    local_88[1] = 1.5;
    uStack_80 = 0x300000008;
    local_88[2] = 3.0;
    Path::lineTo(DAT_0065449c,DAT_005d98e4,(Path *)&local_88);
    Path::lineTo(DAT_005d98e4,0.0,(Path *)&local_88);
                    /* try { // try from 0020d7c5 to 0020d7d8 has its CatchHandler @ 0020d8fc */
    uVar2 = Component::findColour(param_7,param_9 & 0xff ^ 0x1006503,'\0');
    Graphics::setColour(param_6,(int)uVar2);
    local_58[0] = param_3 / DAT_0065b144;
    local_48 = param_4 / DAT_0065b144;
    local_58[2] = param_1 + 0.0;
    local_44 = param_2 + 0.0;
    local_58[1] = 0.0;
    local_4c = 0;
    local_40 = 0x40200000;
    local_38 = 0;
                    /* try { // try from 0020d84c to 0020d8d8 has its CatchHandler @ 0020d8fa */
    cVar1 = (**(code **)(**(long **)(param_6 + 8) + 0x68))();
    if ((cVar1 == '\0') && ((long)uStack_80._4_4_ != 0)) {
      pfVar3 = local_88;
      do {
        fVar6 = *pfVar3;
        if ((fVar6 != DAT_005de3d0) || (NAN(fVar6) || NAN(DAT_005de3d0))) {
          if ((fVar6 != DAT_005de3d4) || (NAN(fVar6) || NAN(DAT_005de3d4))) {
            if (((fVar6 != DAT_005de3d8) || (NAN(fVar6) || NAN(DAT_005de3d8))) &&
               ((fVar6 != DAT_005de3dc || (NAN(fVar6) || NAN(DAT_005de3dc))))) goto LAB_0020d894;
          }
          (**(code **)(**(long **)(param_6 + 8) + 0xd8))
                    (*(long **)(param_6 + 8),&local_88,&local_40,local_58);
          break;
        }
        pfVar3 = pfVar3 + 2;
LAB_0020d894:
        pfVar3 = pfVar3 + 1;
      } while (pfVar3 != local_88 + uStack_80._4_4_);
    }
    uStack_80 = uStack_80 & 0xffffffff;
    free(local_88);
  }
  return;
}


