// Function : createDrawableFromSVG
// Namespace: juce
// Entry    : 0029f2c0
// Prototype: undefined createDrawableFromSVG(juce * this, byte * param_1, undefined8 param_2, char * param_3, SVGState * * param_4, undefined8 param_5)
// Body     : 0029f2c0 - 0029f4a0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::createDrawableFromSVG(char const*) */

void __thiscall
juce::createDrawableFromSVG
          (juce *this,byte *param_1,undefined8 param_2,char *param_3,SVGState **param_4,
          byte *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  Drawable *pDVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar6;
  undefined8 extraout_RDX_01;
  long lVar7;
  long lVar8;
  ulong uVar9;
  XmlElement *local_80;
  byte *local_78;
  XmlElement *local_70;
  ulong local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 *local_38;
  XmlElement *local_30;
  undefined8 local_28;
  
  local_78 = &DAT_0061ac58;
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    pbVar5 = param_1 + 1;
    lVar8 = 0;
    do {
      lVar7 = lVar8 + (ulong)(bVar4 >> 7);
      lVar8 = lVar7 + 1;
      bVar4 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar4 != 0);
    uVar9 = lVar7 + 5U & 0xfffffffffffffffc;
    puVar2 = operator_new__(uVar9 + 0x17);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    *(ulong *)(puVar2 + 2) = uVar9;
    local_78 = (byte *)(puVar2 + 4);
    param_3 = (char *)CONCAT71((int7)((ulong)pbVar5 >> 8),*param_1);
    pbVar5 = local_78;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        bVar4 = (byte)param_3;
        if ((char)bVar4 < '\0') {
          *pbVar5 = (byte)(((ulong)param_3 & 0xffffffff) >> 6) & 3 | 0xc0;
          pbVar5[1] = bVar4 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 1;
        }
        else {
          *pbVar5 = bVar4;
        }
        pbVar5 = pbVar5 + 1;
        param_3 = (char *)(ulong)*param_1;
      } while (*param_1 != 0);
    }
    *pbVar5 = 0;
  }
  pbVar5 = local_78 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar5 = *(int *)pbVar5 + 1;
    UNLOCK();
  }
  local_70 = (XmlElement *)0x0;
  local_68 = local_68 & 0xffffffffffff0000;
  local_60 = &DAT_0061ac58;
  puStack_58 = &DAT_0061ac58;
  local_50 = ZEXT816(0);
  local_40 = CONCAT62(local_40._2_6_,0x100);
  local_38 = (undefined1 *)0x0;
                    /* try { // try from 0029f3d6 to 0029f3e4 has its CatchHandler @ 0029f4b2 */
  XmlDocument::getDocumentElement((XmlDocument *)&local_80,(XmlDocument *)&local_78);
  XmlDocument::~XmlDocument((XmlDocument *)&local_78);
  uVar6 = extraout_RDX;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar5);
      uVar6 = extraout_RDX_00;
    }
  }
                    /* try { // try from 0029f40f to 0029f41d has its CatchHandler @ 0029f4a3 */
  uVar9 = XmlElement::hasTagNameIgnoringNamespace
                    (local_80,&DAT_005e3355,uVar6,param_3,param_4,(uint)param_5);
  if ((char)uVar9 == '\0') {
    *(undefined8 *)this = 0;
  }
  else {
    local_78 = &DAT_0061ac58;
    local_70 = local_80;
    local_68 = 0;
    local_60 = _DAT_005dd1f0;
    puStack_58 = _UNK_005dd1f8;
    local_50 = ZEXT416(DAT_005d9038);
    local_40 = 0x3f800000;
    local_38 = &DAT_0061ac58;
    local_30 = local_80;
    local_28 = 0;
                    /* try { // try from 0029f46a to 0029f478 has its CatchHandler @ 0029f4a1 */
    pDVar3 = SVGState::parseSVGElement
                       ((SVGState *)&local_78,(long *)&local_30,extraout_RDX_01,param_3,param_4,
                        param_5);
    *(Drawable **)this = pDVar3;
  }
  XmlElement::~XmlElement(local_80);
  operator_delete(local_80);
  return;
}


