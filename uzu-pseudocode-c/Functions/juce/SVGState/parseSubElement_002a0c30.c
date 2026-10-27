// Function : parseSubElement
// Namespace: juce:SVGState
// Entry    : 002a0c30
// Prototype: Drawable * parseSubElement(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, SVGState * this, float * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)
// Body     : 002a0c30 - 002a0f68


/* juce::SVGState::parseSubElement(juce::SVGState::XmlPath const&) */

Drawable * __thiscall
juce::SVGState::parseSubElement
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,SVGState *this,float *param_5
          ,undefined8 param_6,undefined8 param_7,SVGState **param_8,byte *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  Component *pCVar6;
  Drawable *pDVar7;
  Drawable *extraout_RAX;
  char *pcVar8;
  int iVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  char *pcVar10;
  long *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  String *this_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  long *local_58;
  float *pfStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (long *)0x0;
  pfStack_50 = (float *)0x0;
  local_38 = 1;
                    /* try { // try from 002a0c55 to 002a0c73 has its CatchHandler @ 002a0f9b */
  uVar5 = parsePathElement(0,param_2,param_3,this,(long *)param_5,(Path *)&local_58,param_7,param_8,
                           param_9);
  if ((char)uVar5 != '\0') {
    pCVar6 = parseShape(this,param_5,(Path *)&local_58,(char *)0x1,param_8,param_9);
    pfStack_50 = (float *)((ulong)pfStack_50 & 0xffffffff);
    free(local_58);
    return (Drawable *)pCVar6;
  }
  pfStack_50 = (float *)((ulong)pfStack_50 & 0xffffffff);
  free(local_58);
  this_00 = (String *)(*(long *)param_5 + 0x18);
  pcVar10 = ":";
  uVar4 = juce::String::lastIndexOf
                    (this_00,&DAT_005e5e94,extraout_RDX,param_7,param_8,(uint)param_9);
  if (-1 < (int)uVar4) {
    iVar9 = 0;
    uVar3 = uVar4;
    do {
      uVar3 = uVar3 + 1;
      pcVar8 = (char *)(ulong)uVar3;
      cVar1 = *pcVar10;
      if (cVar1 < '\0') {
        do {
          pbVar13 = (byte *)(pcVar10 + 1);
          pcVar10 = pcVar10 + 1;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar10 = pcVar10 + 1;
        if (cVar1 == '\0') goto LAB_002a0d02;
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  pbVar13 = *(byte **)this_00;
  pcVar8 = (char *)&emptyString;
  if (pbVar13 != &DAT_0061ac58) {
    LOCK();
    *(int *)(pbVar13 + -0x10) = *(int *)(pbVar13 + -0x10) + 1;
    UNLOCK();
  }
  goto LAB_002a0d9a;
LAB_002a0d02:
  pbVar13 = *(byte **)this_00;
  if (uVar4 + iVar9 == 0 || SCARRY4(uVar4,iVar9) != (int)(uVar4 + iVar9) < 0) {
    pcVar8 = (char *)&emptyString;
    if (pbVar13 != &DAT_0061ac58) {
      LOCK();
      *(int *)(pbVar13 + -0x10) = *(int *)(pbVar13 + -0x10) + 1;
      UNLOCK();
    }
  }
  else {
    pbVar12 = pbVar13;
    do {
      bVar2 = *pbVar12;
      pbVar13 = &DAT_0061ac58;
      if (bVar2 == 0) goto LAB_002a0d9a;
      pbVar13 = pbVar12 + 1;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        if ((bVar2 & 0x20) == 0) {
          pbVar13 = pbVar12 + 2;
        }
        else {
          pbVar13 = pbVar12 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
      }
      uVar4 = (int)pcVar8 - 1;
      pcVar8 = (char *)(ulong)uVar4;
      pbVar12 = pbVar13;
    } while (1 < (int)uVar4);
    pbVar13 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar13);
  }
LAB_002a0d9a:
  uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar13,&DAT_0065c223);
  if (uVar4 == 0) {
    pDVar7 = parseGroupElement(this,(long *)param_5,extraout_RDX_00,pcVar8,param_8,param_9);
  }
  else {
    uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar13,&DAT_005e3355);
    if (uVar4 == 0) {
      pDVar7 = parseSVGElement(this,(long *)param_5,extraout_RDX_01,pcVar8,param_8,param_9);
    }
    else {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar13,(byte *)0x65a4a6);
      if (uVar4 == 0) {
        pDVar7 = parseText(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,this,
                           (long *)param_5,1,(float *)0x0,(Drawable *)0x0,param_9);
      }
      else {
        uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar13,(byte *)0x5e4330);
        if (uVar4 == 0) {
          pDVar7 = parseImage(this,(long *)param_5,1,(float *)0x0,param_8,param_9);
        }
        else {
          uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            (pbVar13,(byte *)"switch");
          if (uVar4 == 0) {
            plVar11 = *(long **)(*(long *)param_5 + 8);
            if (plVar11 != (long *)0x0) {
              pDVar7 = (Drawable *)0x0;
              do {
                uVar4 = CharacterFunctions::
                        compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                  ((byte *)plVar11[3],&DAT_0065c223);
                if (uVar4 == 0) {
                  local_58 = plVar11;
                  pfStack_50 = param_5;
                  pDVar7 = parseGroupElement(this,(long *)&local_58,extraout_RDX_03,pcVar8,param_8,
                                             param_9);
                  break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
              goto LAB_002a0f30;
            }
          }
          else {
            uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (pbVar13,&DAT_005e4e5c);
            if (uVar4 == 0) {
              pDVar7 = parseGroupElement(this,(long *)param_5,extraout_RDX_02,pcVar8,param_8,param_9
                                        );
              goto LAB_002a0f30;
            }
            uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (pbVar13,(byte *)0x65adb7);
            if (uVar4 == 0) {
              parseUseOther(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,this,
                            (long *)param_5);
              pDVar7 = extraout_RAX;
              goto LAB_002a0f30;
            }
            uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (pbVar13,(byte *)0x5e3c05);
            if (uVar4 == 0) {
                    /* try { // try from 002a0e51 to 002a0f2c has its CatchHandler @ 002a0f69 */
              parseCSSStyle((long)this,*(XmlElement **)param_5);
            }
            uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (pbVar13,&DAT_005e3aa1);
            if (uVar4 == 0) {
              parseDefs(this,(long *)param_5);
            }
          }
          pDVar7 = (Drawable *)0x0;
        }
      }
    }
  }
LAB_002a0f30:
  pbVar13 = pbVar13 + -0x10;
  if (pbVar13 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)pbVar13;
    *(int *)pbVar13 = *(int *)pbVar13 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(pbVar13);
    }
  }
  return pDVar7;
}


