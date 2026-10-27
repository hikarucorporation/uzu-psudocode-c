// Function : parseSubElements
// Namespace: juce:SVGState
// Entry    : 002a08b0
// Prototype: undefined parseSubElements(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, SVGState * this, long * param_5, Component * param_6, char * param_7, SVGState * * param_8, byte * param_9)
// Body     : 002a08b0 - 002a0bbd


/* juce::SVGState::parseSubElements(juce::SVGState::XmlPath const&, juce::DrawableComposite&, bool)
    */

void __thiscall
juce::SVGState::parseSubElements
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,SVGState *this,
          long *param_5,Component *param_6,char *param_7,SVGState **param_8,byte *param_9)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  Drawable *pDVar4;
  Component *extraout_RDX;
  Component *extraout_RDX_00;
  Component *extraout_RDX_01;
  Component *extraout_RDX_02;
  Component *extraout_RDX_03;
  Component *extraout_RDX_04;
  Component *extraout_RDX_05;
  Component *extraout_RDX_06;
  Component *extraout_RDX_07;
  Component *extraout_RDX_08;
  Component *extraout_RDX_09;
  int *piVar5;
  SVGState *pSVar6;
  long *plVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  SVGState *local_78;
  long *local_70;
  long *local_68;
  SVGState *local_60;
  Drawable *local_58;
  Component *local_50;
  long *local_48;
  char *local_40;
  SVGState *local_38;
  
  plVar7 = *(long **)(*param_5 + 8);
  if (plVar7 != (long *)0x0) {
    local_50 = param_6;
    local_48 = param_5;
    if ((char)param_7 == '\0') {
      do {
        local_68 = local_48;
        local_70 = plVar7;
        pDVar4 = parseSubElement(param_1_00,param_2_00,param_3,this,(float *)&local_70,param_6,
                                 param_7,param_8,param_9);
        param_6 = extraout_RDX_05;
        param_1_00 = extraout_XMM0_Qa_03;
        if (pDVar4 != (Drawable *)0x0) {
          Component::addChildComponent(local_50,(Component *)pDVar4,0xffffffff);
          local_78 = (SVGState *)&DAT_0061ac58;
                    /* try { // try from 002a0b0b to 002a0b24 has its CatchHandler @ 002a0c1a */
          param_7 = "display";
          param_8 = &local_78;
          getStyleAttribute((SVGState *)&local_60,(long)this,(long *)&local_70,(byte *)"display",
                            (byte *)&local_78,param_9);
          pSVar6 = local_60;
          uVar3 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)local_60,&DAT_0065e5f2);
          pSVar6 = pSVar6 + -0x10;
          param_6 = extraout_RDX_06;
          param_1_00 = extraout_XMM0_Qa_04;
          if (pSVar6 != (SVGState *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pSVar6;
            *(int *)pSVar6 = *(int *)pSVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pSVar6);
              param_6 = extraout_RDX_07;
              param_1_00 = extraout_XMM0_Qa_05;
            }
          }
          pSVar6 = local_78 + -0x10;
          if (pSVar6 != (SVGState *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pSVar6;
            *(int *)pSVar6 = *(int *)pSVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pSVar6);
              param_6 = extraout_RDX_09;
              param_1_00 = extraout_XMM0_Qa_06;
            }
          }
          if (uVar3 != 0) {
            param_1_00 = (**(code **)(*(long *)pDVar4 + 0x60))(pDVar4,1);
            param_6 = extraout_RDX_08;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      local_38 = this + 8;
      do {
        local_68 = local_48;
        local_70 = plVar7;
        pDVar4 = parseSubElement(param_1_00,param_2_00,param_3,this,(float *)&local_70,param_6,
                                 param_7,param_8,param_9);
        param_6 = extraout_RDX;
        param_1_00 = extraout_XMM0_Qa;
        if (pDVar4 != (Drawable *)0x0) {
          Component::addChildComponent(local_50,(Component *)pDVar4,0xffffffff);
          local_78 = (SVGState *)&DAT_0061ac58;
                    /* try { // try from 002a094a to 002a0961 has its CatchHandler @ 002a0c1e */
          getStyleAttribute((SVGState *)&local_60,(long)this,(long *)&local_70,(byte *)"display",
                            (byte *)&local_78,param_9);
          pSVar6 = local_60;
          uVar3 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)local_60,&DAT_0065e5f2);
          pSVar6 = pSVar6 + -0x10;
          if (pSVar6 != (SVGState *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pSVar6;
            *(int *)pSVar6 = *(int *)pSVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pSVar6);
            }
          }
          pSVar6 = local_78 + -0x10;
          if (pSVar6 != (SVGState *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pSVar6;
            *(int *)pSVar6 = *(int *)pSVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pSVar6);
            }
          }
          if (uVar3 != 0) {
            (**(code **)(*(long *)pDVar4 + 0x60))(pDVar4,1);
          }
          local_60 = (SVGState *)&DAT_0061ac58;
                    /* try { // try from 002a09de to 002a0a02 has its CatchHandler @ 002a0c1c */
          param_7 = "clip-path";
          param_8 = &local_60;
          param_1_00 = getStyleAttribute((SVGState *)&local_78,(long)this,(long *)&local_70,
                                         (byte *)"clip-path",(byte *)&local_60,param_9);
          param_6 = extraout_RDX_00;
          if (*local_78 != (SVGState)0x0) {
                    /* try { // try from 002a0a0c to 002a0a18 has its CatchHandler @ 002a0be9 */
            param_1_00 = parseURL((SVGState *)&local_40,(long *)&local_78,extraout_RDX_00,param_7,
                                  param_8,param_9);
            pcVar2 = local_40;
            param_6 = extraout_RDX_01;
            if (*local_40 != '\0') {
                    /* try { // try from 002a0a2e to 002a0a3f has its CatchHandler @ 002a0bbe */
              local_60 = this;
              local_58 = pDVar4;
              XmlPath::applyOperationToChildWithID<juce::SVGState::GetClipPathOp>
                        ((XmlPath *)local_38,(ulong *)&local_40,&local_60,param_7,param_8,
                         (ulong)param_9);
              param_6 = extraout_RDX_02;
              param_1_00 = extraout_XMM0_Qa_00;
            }
            piVar5 = (int *)(pcVar2 + -0x10);
            if (piVar5 != &emptyString) {
              LOCK();
              iVar1 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                operator_delete__(piVar5);
                param_6 = extraout_RDX_03;
                param_1_00 = extraout_XMM0_Qa_01;
              }
            }
          }
          pSVar6 = local_78 + -0x10;
          if (pSVar6 != (SVGState *)&emptyString) {
            LOCK();
            iVar1 = *(int *)pSVar6;
            *(int *)pSVar6 = *(int *)pSVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(pSVar6);
              param_6 = extraout_RDX_04;
              param_1_00 = extraout_XMM0_Qa_02;
            }
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


