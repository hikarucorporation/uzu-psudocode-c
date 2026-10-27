// Function : repaintText
// Namespace: juce:TextEditor
// Entry    : 0023e5e0
// Prototype: undefined repaintText(undefined8 param_1, float param_2, TextEditor * param_3, long param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 0023e5e0 - 0023ea2f


/* WARNING: Unknown calling convention: __cdecl */
/* juce::TextEditor::repaintText(juce::Range<int>) */

void __cdecl
juce::TextEditor::repaintText
          (undefined8 param_1,float param_2,TextEditor *param_3,long param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined4 *puVar10;
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
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  long lVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  long *local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  long local_40;
  uint local_34;
  
  uVar6 = (uint)param_4;
  uVar17 = (uint)((ulong)param_4 >> 0x20);
  if (uVar6 != uVar17) {
    iVar4 = (**(code **)(*(long *)param_3 + 0x50))();
    if (iVar4 <= (int)uVar17) {
      lVar14 = *(long *)(param_3 + 400);
      uVar11 = *(ulong *)(lVar14 + 0x40);
      lVar12 = 0;
      cVar9 = '\x01';
LAB_0023e656:
      Component::internalRepaintUnchecked(lVar14,lVar12,uVar11,cVar9);
      return;
    }
    plVar3 = *(long **)(param_3 + 0x338);
    uVar8 = *(uint *)(param_3 + 0x348);
    uVar5 = *(uint *)(param_3 + 0x34c);
    if (*(uint *)(param_3 + 0x340) == uVar6) {
      uVar22 = extraout_RDX;
      local_4c = *(uint *)(param_3 + 0x344);
    }
    else {
      uVar7 = (**(code **)(*plVar3 + 0x50))(plVar3);
      uVar18 = 0;
      if (-1 < (int)uVar6) {
        uVar18 = uVar6;
      }
      if (uVar7 < uVar18) {
        uVar18 = uVar7;
      }
      local_4c = 0;
      if (uVar18 == 0) {
        uVar22 = extraout_RDX_00;
      }
      else {
        ParagraphsModel::getText(&local_58,plVar3[0x66] + 0x60);
        uVar7 = juce::String::operator[]((String *)&local_58,uVar18 - 1);
        local_58 = local_58 + -2;
        uVar22 = extraout_RDX_01;
        if (local_58 != (long *)&emptyString) {
          LOCK();
          lVar14 = *local_58;
          *(int *)local_58 = (int)*local_58 + -1;
          UNLOCK();
          if ((int)lVar14 == 0) {
            operator_delete__(local_58);
            uVar22 = extraout_RDX_02;
          }
        }
        if (uVar7 != 10) {
          uVar7 = (**(code **)(*plVar3 + 0x50))(plVar3);
          uVar22 = extraout_RDX_03;
          local_4c = 1;
          if (uVar18 != uVar7) {
            local_4c = uVar8;
          }
        }
      }
    }
    puVar10 = (undefined4 *)(ulong)uVar5;
    local_48 = 1;
    local_58 = plVar3;
    local_50 = uVar6;
    local_44 = uVar5;
    if (uVar8 != 1) {
      uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
      uVar18 = 0;
      uVar8 = 0;
      if (-1 < (int)uVar6) {
        uVar8 = uVar6;
      }
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      uVar22 = extraout_RDX_04;
      if (uVar8 != 0) {
        ParagraphsModel::getText((undefined8 *)&local_40,plVar3[0x66] + 0x60);
        uVar6 = juce::String::operator[]((String *)&local_40,uVar8 - 1);
        piVar15 = (int *)(local_40 + -0x10);
        uVar22 = extraout_RDX_05;
        if (piVar15 != &emptyString) {
          LOCK();
          iVar4 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            operator_delete__(piVar15);
            uVar22 = extraout_RDX_06;
          }
        }
        if (uVar6 != 10) {
          (**(code **)(*plVar3 + 0x50))(plVar3);
          uVar18 = 1;
          uVar22 = extraout_RDX_07;
        }
      }
      local_4c = uVar18;
    }
    pplVar13 = &local_58;
    uVar22 = getCursorEdge(param_3,(long)pplVar13,uVar22,puVar10,param_7,param_8);
    fVar19 = truncf((float)((ulong)uVar22 >> 0x20));
    iVar4 = (**(code **)(*(long *)param_3 + 0x50))(param_3);
    if ((int)uVar17 < iVar4) {
      plVar3 = *(long **)(param_3 + 0x338);
      uVar6 = *(uint *)(param_3 + 0x348);
      uVar8 = *(uint *)(param_3 + 0x34c);
      if (*(uint *)(param_3 + 0x340) == uVar17) {
        uVar22 = extraout_RDX_08;
        uVar18 = *(uint *)(param_3 + 0x344);
      }
      else {
        uVar18 = (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar5 = 0;
        if (-1 < param_4) {
          uVar5 = uVar17;
        }
        if (uVar18 < uVar5) {
          uVar5 = uVar18;
        }
        uVar18 = 0;
        if (uVar5 == 0) {
          uVar22 = extraout_RDX_09;
        }
        else {
          ParagraphsModel::getText(&local_58,plVar3[0x66] + 0x60);
          uVar7 = juce::String::operator[]((String *)&local_58,uVar5 - 1);
          puVar16 = (uint *)(local_58 + -2);
          puVar10 = &emptyString;
          uVar22 = extraout_RDX_10;
          if (puVar16 != &emptyString) {
            LOCK();
            uVar1 = *puVar16;
            puVar10 = (undefined4 *)(ulong)uVar1;
            *puVar16 = *puVar16 - 1;
            UNLOCK();
            if (uVar1 == 0) {
              local_34 = uVar7;
              operator_delete__(puVar16);
              uVar22 = extraout_RDX_11;
              uVar7 = local_34;
            }
          }
          if (uVar7 != 10) {
            uVar7 = (**(code **)(*plVar3 + 0x50))(plVar3);
            uVar22 = extraout_RDX_12;
            uVar18 = 1;
            if (uVar5 != uVar7) {
              uVar18 = uVar6;
            }
          }
        }
      }
      local_48 = 0;
      local_58 = plVar3;
      local_50 = uVar17;
      local_4c = uVar18;
      local_44 = uVar8;
      if (uVar6 != 0) {
        uVar8 = (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar6 = 0;
        if (param_4 < 0) {
          uVar17 = 0;
        }
        if (uVar8 < uVar17) {
          uVar17 = uVar8;
        }
        uVar22 = extraout_RDX_13;
        if (uVar17 != 0) {
          ParagraphsModel::getText((undefined8 *)&local_40,plVar3[0x66] + 0x60);
          uVar8 = juce::String::operator[]((String *)&local_40,uVar17 - 1);
          piVar15 = (int *)(local_40 + -0x10);
          uVar22 = extraout_RDX_14;
          if (piVar15 != &emptyString) {
            LOCK();
            iVar4 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              operator_delete__(piVar15);
              uVar22 = extraout_RDX_15;
            }
          }
          if (uVar8 != 10) {
            uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
            uVar6 = (uint)(uVar17 == uVar6);
            uVar22 = extraout_RDX_16;
          }
        }
        local_4c = uVar6;
      }
      pplVar13 = &local_58;
      uVar22 = getCursorEdge(param_3,(long)pplVar13,uVar22,puVar10,param_7,param_8);
      iVar4 = (int)(param_2 + param_2 + (float)((ulong)uVar22 >> 0x20));
      uVar22 = extraout_RDX_17;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_3 + 400) + 0x44);
      uVar22 = extraout_RDX_08;
    }
    fVar20 = getYOffset(param_3,pplVar13,uVar22,(long)puVar10,param_7,param_8);
    lVar14 = *(long *)(param_3 + 400);
    fVar21 = floorf(fVar19 + fVar20);
    uVar6 = (uint)fVar21;
    iVar2 = *(int *)(lVar14 + 0x40);
    uVar17 = 0;
    if (-1 < (int)uVar6) {
      uVar17 = uVar6;
    }
    if (-1 < iVar2) {
      fVar19 = ceilf(fVar20 + ((float)iVar4 - fVar19));
      iVar4 = (int)fVar19 + uVar6;
      if (*(int *)(lVar14 + 0x44) < (int)((int)fVar19 + uVar6)) {
        iVar4 = *(int *)(lVar14 + 0x44);
      }
      iVar4 = iVar4 - uVar17;
      if (((-1 < iVar4) && (iVar2 != 0)) && (iVar4 != 0)) {
        uVar11 = CONCAT44(iVar4,iVar2);
        lVar12 = (ulong)uVar17 << 0x20;
        cVar9 = '\0';
        goto LAB_0023e656;
      }
    }
  }
  return;
}


