// Function : keyPressed
// Namespace: juce:TextEditor
// Entry    : 0026e5f0
// Prototype: undefined4 * keyPressed(undefined8 param_1_00, float param_2, TextEditor * this, wint_t * param_4, undefined8 param_5, uint * param_6, uint * param_7, ulong param_8)
// Body     : 0026e5f0 - 0026f1c8


/* juce::TextEditor::keyPressed(juce::KeyPress const&) */

undefined4 * __thiscall
juce::TextEditor::keyPressed
          (undefined8 param_1_00,float param_2,TextEditor *this,wint_t *param_4,undefined8 param_5,
          uint *param_6,uint *param_7,ulong param_8)

{
  long *plVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  wint_t wVar8;
  wint_t wVar9;
  undefined4 uVar10;
  TextEditor *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  byte bVar15;
  sbyte sVar16;
  timespec *ptVar17;
  timespec *ptVar18;
  uint uVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  ScrollBar *this_00;
  uint7 uVar21;
  undefined4 *puVar20;
  char cVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  bool bVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  timespec local_48;
  wint_t local_38 [4];
  uint switchD_0026e8e1::switchdataD_005de97c;
  uint switchD_0026eae3::switchdataD_005de99c;
  
  if (this[0x1c8] == (TextEditor)0x0) {
    pTVar11 = this + 8;
    do {
      param_6 = (uint *)(ulong)*(ushort *)(pTVar11 + 0xe8);
      if ((*(ushort *)(pTVar11 + 0xe8) & 0x8000) != 0) goto LAB_0026e60b;
      pTVar11 = *(TextEditor **)(pTVar11 + 0x30);
    } while (pTVar11 != (TextEditor *)0x0);
  }
  else {
LAB_0026e60b:
    if (param_4[1] != 2) {
      return (undefined4 *)0x0;
    }
    wVar8 = *param_4;
    if (wVar8 != 99) {
      if (0xff < (int)wVar8) {
        return (undefined4 *)0x0;
      }
      wVar8 = towlower(wVar8);
      wVar9 = towlower(99);
      param_5 = extraout_RDX;
      param_1_00 = extraout_XMM0_Qa;
      if (wVar8 != wVar9) {
        if (param_4[1] != 2) {
          return (undefined4 *)0x0;
        }
        wVar8 = *param_4;
        if (wVar8 != 0x61) {
          if (0xff < (int)wVar8) {
            return (undefined4 *)0x0;
          }
          wVar8 = towlower(wVar8);
          wVar9 = towlower(0x61);
          param_5 = extraout_RDX_00;
          param_1_00 = extraout_XMM0_Qa_00;
          if (wVar8 != wVar9) {
            return (undefined4 *)0x0;
          }
        }
      }
    }
  }
  wVar8 = *param_4;
  uVar19 = param_4[1];
  puVar20 = (undefined4 *)(ulong)uVar19;
  uVar21 = (uint7)(uint3)(uVar19 >> 8);
  if ((uVar19 == 2) && (wVar8 == 0x10000054)) {
    this_00 = *(ScrollBar **)(*(long *)(this + 0x188) + 0x100);
    dVar3 = *(double *)(this_00 + 0x138);
    dVar30 = *(double *)(this_00 + 0x148) + dVar3;
    dVar4 = *(double *)(this_00 + 0x140);
    dVar27 = *(double *)(this_00 + 0x148) + dVar4;
    if (dVar27 <= dVar30) {
      dVar27 = dVar30;
    }
    dVar28 = *(double *)(this_00 + 0x128);
    dVar29 = *(double *)(this_00 + 0x130);
    if (dVar27 - dVar30 < dVar29 - dVar28) {
      dVar29 = dVar29 - (dVar27 - dVar30);
      if (dVar30 <= dVar29) {
        dVar29 = dVar30;
      }
      dVar28 = (double)(-(ulong)(dVar30 < dVar28) & (ulong)dVar28 |
                       ~-(ulong)(dVar30 < dVar28) & (ulong)dVar29);
      dVar29 = dVar27 + (dVar28 - dVar30);
      if (dVar29 <= dVar28) {
        dVar29 = dVar28;
      }
    }
    if ((dVar3 == dVar28) && (!NAN(dVar3) && !NAN(dVar28))) {
      if ((dVar4 == dVar29) && (!NAN(dVar4) && !NAN(dVar29))) {
        return (undefined4 *)0x1;
      }
    }
    *(double *)(this_00 + 0x138) = dVar28;
LAB_0026e83c:
    puVar20 = (undefined4 *)CONCAT71(uVar21,1);
    *(double *)(this_00 + 0x140) = dVar29;
    ScrollBar::updateThumbPosition(this_00);
    LOCK();
    bVar26 = *(int *)(*(long *)(this_00 + 0xf8) + 0x18) == 0;
    if (bVar26) {
      *(int *)(*(long *)(this_00 + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    if (!bVar26) {
      return puVar20;
    }
    plVar6 = *(long **)(this_00 + 0xf8);
    if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
       (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar6);
      return puVar20;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    LOCK();
    *(undefined4 *)(*(long *)(this_00 + 0xf8) + 0x18) = 0;
    UNLOCK();
    return puVar20;
  }
  if ((uVar19 == 2) && (wVar8 == 0x10000052)) {
    this_00 = *(ScrollBar **)(*(long *)(this + 0x188) + 0x100);
    dVar3 = *(double *)(this_00 + 0x138);
    dVar30 = dVar3 - *(double *)(this_00 + 0x148);
    dVar4 = *(double *)(this_00 + 0x140);
    dVar27 = dVar4 - *(double *)(this_00 + 0x148);
    if (dVar27 <= dVar30) {
      dVar27 = dVar30;
    }
    dVar28 = *(double *)(this_00 + 0x128);
    dVar29 = *(double *)(this_00 + 0x130);
    if (dVar27 - dVar30 < dVar29 - dVar28) {
      dVar29 = dVar29 - (dVar27 - dVar30);
      if (dVar30 <= dVar29) {
        dVar29 = dVar30;
      }
      dVar28 = (double)(-(ulong)(dVar30 < dVar28) & (ulong)dVar28 |
                       ~-(ulong)(dVar30 < dVar28) & (ulong)dVar29);
      dVar29 = dVar27 + (dVar28 - dVar30);
      if (dVar29 <= dVar28) {
        dVar29 = dVar28;
      }
    }
    if ((dVar3 == dVar28) && (!NAN(dVar3) && !NAN(dVar28))) {
      if ((dVar4 == dVar29) && (!NAN(dVar4) && !NAN(dVar29))) {
        return (undefined4 *)0x1;
      }
    }
    *(double *)(this_00 + 0x138) = dVar28;
    goto LAB_0026e83c;
  }
  uVar25 = (uVar19 >> 2 & 1) + (uVar19 >> 1 & 1);
  if (1 < uVar25) goto switchD_0026eae3_caseD_10000053;
  param_6 = &switchD_0026e8e1::switchdataD_005de97c;
  switch(wVar8) {
  case 0x10000050:
    if ((uVar19 & 6) == 0) {
      puVar20 = (undefined4 *)0x0;
      moveCaretToStartOfLine
                (param_1_00,param_2,this,uVar19 & 1,param_5,&switchD_0026e8e1::switchdataD_005de97c,
                 param_7,param_8);
      goto LAB_0026f1c1;
    }
    uVar25 = 0;
    break;
  case 0x10000051:
    uVar25 = (**(code **)(*(long *)this + 0x40))(this);
    if ((uVar19 & 6) == 0) {
      uVar25 = uVar25 - 1;
      param_1_00 = extraout_XMM0_Qa_01;
    }
    else {
      uVar25 = findWordBreakBefore(this,uVar25);
      param_1_00 = extraout_XMM0_Qa_02;
    }
    break;
  default:
    if (uVar25 == 0) {
      param_6 = &switchD_0026eae3::switchdataD_005de99c;
      switch(wVar8) {
      case 0x10000052:
        puVar20 = (undefined4 *)0x0;
        moveCaretUp(param_1_00,param_2,this,uVar19 & 1,param_5,0x5de99c,param_7,param_8);
        break;
      default:
        goto switchD_0026eae3_caseD_10000053;
      case 0x10000054:
        puVar20 = (undefined4 *)0x0;
        moveCaretDown(param_1_00,param_2,this,uVar19 & 1,param_5,
                      &switchD_0026eae3::switchdataD_005de99c,param_7,param_8);
        break;
      case 0x10000055:
        puVar20 = (undefined4 *)0x0;
        pageUp(param_1_00,param_2,this,uVar19 & 1,param_5,&switchD_0026eae3::switchdataD_005de99c,
               param_7,param_8);
        break;
      case 0x10000056:
        puVar20 = (undefined4 *)0x0;
        pageDown(param_1_00,param_2,this,uVar19 & 1,param_5,&switchD_0026eae3::switchdataD_005de99c,
                 param_7,param_8);
      }
      goto LAB_0026f1c1;
    }
switchD_0026eae3_caseD_10000053:
    uVar23 = (ulong)uVar19;
    if (uVar19 == 2) {
      if (wVar8 == 99) {
LAB_0026e9b3:
        uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_48);
          auVar7 = SEXT816(CONCAT44(local_48.tv_nsec._4_4_,(undefined4)local_48.tv_nsec) / 1000 +
                           local_48.tv_sec * 1000000) * SEXT816(0x20c49ba5e353f7cf);
          uVar19 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
             (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
          }
        }
        *(uint *)(this + 0x280) = uVar19;
        this[0x260] = (TextEditor)0x1;
        LOCK();
        lVar5 = *(long *)(this + 0x248);
        *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
        UNLOCK();
        piVar24 = (int *)(lVar5 + -0x10);
        if (piVar24 != &emptyString) {
          LOCK();
          iVar2 = *piVar24;
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar24);
          }
        }
        copy(this);
      }
      else {
        if ((int)wVar8 < 0x100) {
          wVar8 = towlower(wVar8);
          wVar9 = towlower(99);
          if (wVar8 == wVar9) goto LAB_0026e9b3;
          uVar23 = (ulong)param_4[1];
          param_5 = extraout_RDX_01;
          param_1_00 = extraout_XMM0_Qa_05;
          if (param_4[1] != 2) goto LAB_0026eb1e;
          wVar8 = *param_4;
        }
        if (wVar8 != 0x78) {
          if (wVar8 == 0x10000063) goto LAB_0026e9b3;
          uVar23 = 2;
          if (0xff < (int)wVar8) goto LAB_0026eb41;
          wVar8 = towlower(wVar8);
          wVar9 = towlower(0x78);
          if (wVar8 != wVar9) {
            uVar23 = (ulong)param_4[1];
            param_5 = extraout_RDX_02;
            param_1_00 = extraout_XMM0_Qa_07;
            goto LAB_0026eb1e;
          }
        }
LAB_0026eb34:
        cutToClipboard(this);
      }
      goto LAB_0026f1c1;
    }
LAB_0026eb1e:
    if ((int)uVar23 == 2) {
LAB_0026eb41:
      wVar8 = *param_4;
      if (wVar8 != 0x76) {
        if (0xff < (int)wVar8) goto LAB_0026ec44;
        wVar8 = towlower(wVar8);
        wVar9 = towlower(0x76);
        if (wVar8 != wVar9) {
          uVar23 = (ulong)param_4[1];
          param_5 = extraout_RDX_03;
          param_1_00 = extraout_XMM0_Qa_08;
          goto LAB_0026eb6e;
        }
      }
LAB_0026eb85:
      uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_48);
        auVar7 = SEXT816(CONCAT44(local_48.tv_nsec._4_4_,(undefined4)local_48.tv_nsec) / 1000 +
                         local_48.tv_sec * 1000000) * SEXT816(0x20c49ba5e353f7cf);
        uVar19 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
           (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
        }
      }
      *(uint *)(this + 0x280) = uVar19;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar5 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar24 = (int *)(lVar5 + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar2 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar24);
        }
      }
      paste(this);
      goto LAB_0026f1c1;
    }
    if ((int)uVar23 == 1) {
      if (*param_4 == 0x100000ff) goto LAB_0026eb34;
LAB_0026eb6e:
      wVar8 = *param_4;
      if (((int)uVar23 == 1) && (wVar8 == 0x10000063)) goto LAB_0026eb85;
    }
    else {
LAB_0026ec44:
      wVar8 = *param_4;
    }
    ptVar18 = &local_48;
    if (uVar25 < 2) {
      if (wVar8 == 0x100000ff) {
        deleteForwards(this);
        goto LAB_0026f1c1;
      }
      if (wVar8 == 8) {
        deleteBackwards(param_1_00,param_2,this,(uint)((uVar19 & 6) != 0),param_5,param_6,param_7,
                        param_8);
        goto LAB_0026f1c1;
      }
    }
    local_48.tv_sec = 0x200000061;
    local_48.tv_nsec._0_4_ = 0;
    uVar12 = KeyPress::operator==(wVar8,(wint_t)uVar23,param_4[2],(wint_t *)&local_48);
    ptVar17 = &local_48;
    if ((char)uVar12 != '\0') {
      selectAll(extraout_XMM0_Qa_09,param_2,this,uVar23,extraout_RDX_04,ptVar18,param_7,param_8);
      goto LAB_0026f1c1;
    }
    local_48.tv_sec = 0x20000007a;
    local_48.tv_nsec._0_4_ = 0;
    uVar12 = KeyPress::operator==(*param_4,param_4[1],param_4[2],(wint_t *)&local_48);
    ptVar18 = &local_48;
    if ((char)uVar12 == '\0') {
      local_48.tv_sec = 0x200000079;
      local_48.tv_nsec._0_4_ = 0;
      uVar13 = KeyPress::operator==(*param_4,param_4[1],param_4[2],(wint_t *)&local_48);
      uVar12 = extraout_RDX_06;
      if ((char)uVar13 != '\0') {
LAB_0026ed3e:
        cVar22 = '\0';
        goto LAB_0026ed43;
      }
      local_38[0] = 0x7a;
      local_38[1] = 3;
      local_38[2] = 0;
      ptVar18 = (timespec *)local_38;
      uVar13 = KeyPress::operator==(*param_4,param_4[1],param_4[2],(wint_t *)ptVar18);
      uVar12 = extraout_RDX_07;
      if ((char)uVar13 != '\0') goto LAB_0026ed3e;
    }
    else {
      cVar22 = '\x01';
      ptVar18 = ptVar17;
      uVar12 = extraout_RDX_05;
LAB_0026ed43:
      uVar12 = undoOrRedo(this,cVar22,uVar12,ptVar18,param_7,param_8);
      puVar20 = (undefined4 *)CONCAT71(uVar21,1);
      if ((char)uVar12 != '\0') {
        return puVar20;
      }
    }
    if ((*param_4 == 0xd) && (ptVar18 = (timespec *)(ulong)(param_4[1] & 7), (param_4[1] & 7) == 0))
    {
      uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_48);
        auVar7 = SEXT816(CONCAT44(local_48.tv_nsec._4_4_,(undefined4)local_48.tv_nsec) / 1000 +
                         local_48.tv_sec * 1000000) * SEXT816(0x20c49ba5e353f7cf);
        uVar19 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
           (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
        }
      }
      *(uint *)(this + 0x280) = uVar19;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar5 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      puVar20 = &emptyString;
      piVar24 = (int *)(lVar5 + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar2 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar24);
        }
      }
      if (this[0x1cc] == (TextEditor)0x0) {
        (**(code **)(*(long *)this + 0x100))(this);
        goto LAB_0026f0ed;
      }
      local_48.tv_sec = (__time_t)operator_new__(0x1b);
      LOCK();
      *(undefined4 *)local_48.tv_sec = 0;
      UNLOCK();
      *(undefined8 *)(local_48.tv_sec + 8) = 4;
      *(undefined2 *)(local_48.tv_sec + 0x10) = 10;
      local_48.tv_sec = local_48.tv_sec + 0x10;
                    /* try { // try from 0026ee51 to 0026ee59 has its CatchHandler @ 0026f1ea */
      (**(code **)(*(long *)this + 0x38))(this,&local_48);
      piVar24 = (int *)(local_48.tv_sec + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar2 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar24);
        }
      }
    }
    else {
      if (*param_4 == 0x1b) {
        uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_48);
          ptVar18 = (timespec *)0x20c49ba5e353f7cf;
          auVar7 = SEXT816(CONCAT44(local_48.tv_nsec._4_4_,(undefined4)local_48.tv_nsec) / 1000 +
                           local_48.tv_sec * 1000000) * SEXT816(0x20c49ba5e353f7cf);
          uVar19 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
             (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
          }
        }
        *(uint *)(this + 0x280) = uVar19;
        this[0x260] = (TextEditor)0x1;
        LOCK();
        lVar5 = *(long *)(this + 0x248);
        *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
        UNLOCK();
        piVar24 = (int *)(lVar5 + -0x10);
        if (piVar24 != &emptyString) {
          LOCK();
          iVar2 = *piVar24;
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar24);
          }
        }
        uVar19 = (**(code **)(*(long *)this + 0x40))(this);
        *(undefined4 *)(this + 0x2f0) = 0;
        repaintText(extraout_XMM0_Qa_10,param_2,this,*(long *)(this + 0x270),extraout_RDX_08,ptVar18
                    ,param_7,param_8);
        moveCaret(this,uVar19);
        uVar10 = (**(code **)(*(long *)this + 0x40))(this);
        if (*(long *)(this + 0x270) != CONCAT44(uVar10,uVar10)) {
          *(long *)(this + 0x270) = CONCAT44(uVar10,uVar10);
                    /* try { // try from 0026ef99 to 0026ef9d has its CatchHandler @ 0026f1c9 */
          Component::getAccessibilityHandler((Component *)(this + 8));
        }
        (**(code **)(*(long *)this + 0x108))(this);
LAB_0026f0ed:
        return (undefined4 *)CONCAT71((int7)((ulong)puVar20 >> 8),this[0x1d5] != (TextEditor)0x0);
      }
      uVar19 = param_4[2];
      if ((int)uVar19 < 0x20) {
        if (this[0x1d2] == (TextEditor)0x0) {
          return (undefined4 *)0x0;
        }
        if (uVar19 != 9) {
          return (undefined4 *)0x0;
        }
      }
      puVar20 = (undefined4 *)(ulong)(0xffff < uVar19);
      puVar14 = operator_new__((long)puVar20 * 4 + 0x1b);
      local_48.tv_sec = (__time_t)(puVar14 + 4);
      LOCK();
      *puVar14 = 0;
      UNLOCK();
      *(long *)(puVar14 + 2) = (long)puVar20 * 4 + 4;
      if (uVar19 < 0x80) {
        *(char *)(puVar14 + 4) = (char)uVar19;
        puVar14 = (undefined4 *)((long)puVar14 + 0x11);
      }
      else {
        uVar25 = 1;
        if (0x7ff < uVar19) {
          uVar25 = 0xffff < uVar19 | 2;
        }
        bVar15 = (byte)uVar25;
        sVar16 = bVar15 * '\x06';
        *(byte *)(puVar14 + 4) = (byte)(uVar19 >> sVar16) | (byte)(0xff << (bVar15 ^ 7));
        *(byte *)((long)puVar14 + 0x11) =
             (byte)(uVar19 >> ((bVar15 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
        if (uVar19 < 0x800) {
          puVar14 = (undefined4 *)((long)puVar14 + 0x12);
        }
        else {
          *(byte *)((long)puVar14 + 0x12) = (byte)(uVar19 >> (sVar16 - 0xcU & 0x1f)) & 0x3f | 0x80;
          if (uVar25 - 1 < 2) {
            puVar14 = (undefined4 *)((long)puVar14 + 0x13);
          }
          else {
            *(byte *)((long)puVar14 + 0x13) =
                 (byte)(uVar19 >> (sVar16 - 0x12U & 0x1f)) & 0x3f | 0x80;
            puVar14 = puVar14 + 5;
          }
        }
      }
      *(undefined1 *)puVar14 = 0;
                    /* try { // try from 0026f118 to 0026f120 has its CatchHandler @ 0026f1d1 */
      (**(code **)(*(long *)this + 0x38))(this,&local_48);
      piVar24 = (int *)(local_48.tv_sec + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar2 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar24);
        }
      }
      uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_48);
        auVar7 = SEXT816(CONCAT44(local_48.tv_nsec._4_4_,(undefined4)local_48.tv_nsec) / 1000 +
                         local_48.tv_sec * 1000000) * SEXT816(0x20c49ba5e353f7cf);
        uVar19 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
           (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
        }
      }
      *(uint *)(this + 0x280) = uVar19;
    }
    goto LAB_0026f1c1;
  case 0x10000053:
    uVar25 = (**(code **)(*(long *)this + 0x40))(this);
    if ((uVar19 & 6) == 0) {
      uVar25 = uVar25 + 1;
      param_1_00 = extraout_XMM0_Qa_03;
    }
    else {
      uVar25 = findWordBreakAfter(this,uVar25);
      param_1_00 = extraout_XMM0_Qa_04;
    }
    break;
  case 0x10000057:
    if ((uVar19 & 6) == 0) {
      puVar20 = (undefined4 *)0x0;
      moveCaretToEndOfLine
                (param_1_00,param_2,this,uVar19 & 1,param_5,&switchD_0026e8e1::switchdataD_005de97c,
                 param_7,param_8);
      goto LAB_0026f1c1;
    }
    uVar25 = (**(code **)(*(long *)this + 0x50))(this);
    param_1_00 = extraout_XMM0_Qa_06;
  }
  puVar20 = (undefined4 *)0x0;
  moveCaretWithTransaction(param_1_00,param_2,this,uVar25,uVar19 & 1,param_6,param_7,param_8);
LAB_0026f1c1:
  return (undefined4 *)CONCAT71((int7)((ulong)puVar20 >> 8),1);
}


