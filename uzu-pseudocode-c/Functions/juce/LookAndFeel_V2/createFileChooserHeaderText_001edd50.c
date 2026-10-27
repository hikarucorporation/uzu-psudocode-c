// Function : createFileChooserHeaderText
// Namespace: juce:LookAndFeel_V2
// Entry    : 001edd50
// Prototype: String * createFileChooserHeaderText(String * param_1, long * param_2, undefined8 * param_3, String * param_4)
// Body     : 001edd50 - 001ee513


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::createFileChooserHeaderText(juce::String const&, juce::String const&) */

String * __cdecl
juce::LookAndFeel_V2::createFileChooserHeaderText
          (String *param_1,long *param_2,undefined8 *param_3,String *param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  String *pSVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  long *local_268;
  long *local_260;
  long *local_258;
  String *local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  long *local_238;
  long *local_230;
  long *plStack_228;
  undefined8 local_220;
  void *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1ea;
  ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *local_1e0;
  undefined1 *local_1d8;
  undefined1 *puStack_1d0;
  long *local_1c8;
  long *local_1c0;
  long *plStack_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_17a;
  undefined1 *local_168;
  long lStack_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_10a;
  long local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  void *local_d0;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  *(undefined1 **)param_1 = &DAT_0061ac58;
  *(undefined8 *)(param_1 + 8) = 0x2400000000;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar14 = *(uint *)((long)param_2 + 0xf4);
  if (0 < (int)uVar14) {
    lVar4 = param_2[0x1d];
    uVar15 = uVar14;
    uVar13 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar4 + (long)(int)uVar13 * 8) == 0x1000850) {
          if (-1 < (int)uVar13) {
            uVar12 = 0;
            if (uVar13 < uVar14) {
              uVar12 = *(undefined4 *)(lVar4 + 4 + (ulong)uVar13 * 8);
            }
            goto LAB_001eddfe;
          }
          goto LAB_001eddf8;
        }
        uVar11 = (int)(uVar13 + uVar15) / 2;
        if (uVar11 == uVar13) goto LAB_001eddf8;
        if (*(int *)(lVar4 + (long)(int)uVar11 * 8) < 0x1000851) break;
        uVar15 = uVar11;
        if ((int)uVar11 <= (int)uVar13) goto LAB_001eddf8;
      }
      uVar13 = uVar11;
    } while ((int)uVar11 < (int)uVar15);
  }
LAB_001eddf8:
  uVar12 = _ZN4juce7ColoursL5blackE_14;
LAB_001eddfe:
  local_260 = (long *)*param_3;
  plVar9 = local_260 + -2;
  if (plVar9 != (long *)&emptyString) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
                    /* try { // try from 001ede1a to 001ede36 has its CatchHandler @ 001ee52b */
  local_250 = param_1;
  juce::String::appendCharPointer((String *)&local_260,&DAT_00658930,0x658932);
  local_268 = local_260;
  plVar9 = local_260 + -2;
  if (plVar9 != (long *)&emptyString) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
                    /* try { // try from 001ede4d to 001ede66 has its CatchHandler @ 001ee526 */
  FontOptions::FontOptions(DAT_005de3f8,(FontOptions *)&local_98,1);
                    /* try { // try from 001ede6b to 001ede84 has its CatchHandler @ 001ee596 */
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  FontOptions::FontOptions((FontOptions *)&local_248,&local_98);
  local_168 = local_248;
  local_248 = &DAT_0061ac58;
  lStack_160 = (long)puStack_240;
  puStack_240 = &DAT_0061ac58;
  local_158 = local_238;
  local_238 = (long *)0x0;
  local_150 = local_230;
  plStack_148 = plStack_228;
  local_140 = local_220;
  local_230 = (long *)0x0;
  plStack_228 = (long *)0x0;
  local_220 = 0;
  local_138 = local_218;
  uStack_130 = uStack_210;
  local_128 = local_208;
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_120 = CONCAT44(uStack_1fc,uVar8);
  uStack_10a = uStack_1ea;
                    /* try { // try from 001edf2a to 001edf3b has its CatchHandler @ 001ee521 */
  local_200 = uVar8;
  Font::Font((Font *)&local_258,(long *)&local_168);
  local_248 = (undefined1 *)CONCAT44(local_248._4_4_,uVar12);
                    /* try { // try from 001edf40 to 001edfac has its CatchHandler @ 001ee56d */
  juce::String::operator+=(param_1,(String *)&local_268);
  uVar14 = 0;
  plVar9 = local_268;
  do {
    lVar4 = *plVar9;
    if ((char)lVar4 < '\0') {
      do {
        lVar4 = *plVar9;
        plVar9 = (long *)((long)plVar9 + 1);
      } while ((lVar4 & 0xc000) == 0x8000);
    }
    else {
      plVar9 = (long *)((long)plVar9 + 1);
      if ((char)lVar4 == '\0') {
        local_1e0 = (ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)
                    (param_1 + 0x18);
        (anonymous_namespace)::appendRange(local_1e0,uVar14,(long *)&local_258,(uint *)&local_248);
        if (local_258 != (long *)0x0) {
          LOCK();
          plVar9 = local_258 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)(*local_258 + 8))();
          }
        }
        if (local_138 != (void *)0x0) {
          operator_delete(local_138);
        }
        plVar5 = plStack_148;
        for (plVar9 = local_150; plVar9 != plVar5; plVar9 = plVar9 + 1) {
          piVar16 = (int *)(*plVar9 + -0x10);
          if (piVar16 != &emptyString) {
            LOCK();
            iVar2 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              operator_delete__(piVar16);
            }
          }
        }
        if (local_150 != (long *)0x0) {
          operator_delete(local_150);
        }
        if (local_158 != (long *)0x0) {
          LOCK();
          plVar9 = local_158 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)(*local_158 + 8))();
          }
        }
        piVar16 = (int *)(lStack_160 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar16);
          }
        }
        piVar16 = (int *)(local_168 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar16);
          }
        }
        plVar9 = local_80;
        if (local_68 != (void *)0x0) {
          operator_delete(local_68);
          plVar9 = local_80;
        }
        for (; plVar9 != local_78; plVar9 = plVar9 + 1) {
          piVar16 = (int *)(*plVar9 + -0x10);
          if (piVar16 != &emptyString) {
            LOCK();
            iVar2 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              operator_delete__(piVar16);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          operator_delete(local_80);
        }
        if (local_88 != (long *)0x0) {
          LOCK();
          plVar9 = local_88 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)(*local_88 + 8))();
          }
        }
        piVar16 = (int *)(local_90 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar16);
          }
        }
        piVar16 = (int *)(local_98 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar16);
          }
        }
        plVar9 = local_268 + -2;
        if (plVar9 != (long *)&emptyString) {
          LOCK();
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 0) {
            operator_delete__(plVar9);
          }
        }
        plVar9 = local_260 + -2;
        if (plVar9 != (long *)&emptyString) {
          LOCK();
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 0) {
            operator_delete__(plVar9);
          }
        }
                    /* try { // try from 001ee13c to 001ee152 has its CatchHandler @ 001ee519 */
        FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_100,0);
                    /* try { // try from 001ee157 to 001ee170 has its CatchHandler @ 001ee55b */
        uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
        FontOptions::FontOptions((FontOptions *)&local_248,&local_100);
        local_1d8 = local_248;
        local_248 = &DAT_0061ac58;
        puStack_1d0 = puStack_240;
        puStack_240 = &DAT_0061ac58;
        local_1c8 = local_238;
        local_238 = (long *)0x0;
        local_1c0 = local_230;
        plStack_1b8 = plStack_228;
        local_1b0 = local_220;
        local_230 = (long *)0x0;
        plStack_228 = (long *)0x0;
        local_220 = 0;
        local_1a8 = local_218;
        uStack_1a0 = uStack_210;
        local_198 = local_208;
        local_218 = (void *)0x0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_190 = CONCAT44(uStack_1fc,uVar8);
        uStack_17a = uStack_1ea;
                    /* try { // try from 001ee216 to 001ee225 has its CatchHandler @ 001ee514 */
        local_200 = uVar8;
        Font::Font((Font *)&local_268,(long *)&local_1d8);
        pSVar6 = local_250;
        local_248 = (undefined1 *)CONCAT44(local_248._4_4_,uVar12);
                    /* try { // try from 001ee22b to 001ee301 has its CatchHandler @ 001ee533 */
        juce::String::operator+=(local_250,param_4);
        pcVar10 = *(char **)param_4;
        uVar14 = 0;
        do {
          cVar3 = *pcVar10;
          if (cVar3 < '\0') {
            do {
              pbVar1 = (byte *)(pcVar10 + 1);
              pcVar10 = pcVar10 + 1;
            } while ((*pbVar1 & 0xc0) == 0x80);
          }
          else {
            pcVar10 = pcVar10 + 1;
            if (cVar3 == '\0') {
              (anonymous_namespace)::appendRange
                        (local_1e0,uVar14,(long *)&local_268,(uint *)&local_248);
              if (local_268 != (long *)0x0) {
                LOCK();
                plVar9 = local_268 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)(*local_268 + 8))();
                }
              }
              plVar9 = local_1c0;
              plVar5 = plStack_1b8;
              if (local_1a8 != (void *)0x0) {
                operator_delete(local_1a8);
                plVar9 = local_1c0;
                plVar5 = plStack_1b8;
              }
              for (; plVar7 = plStack_1b8, plVar9 != plStack_1b8; plVar9 = plVar9 + 1) {
                piVar16 = (int *)(*plVar9 + -0x10);
                plStack_1b8 = plVar5;
                if (piVar16 != &emptyString) {
                  LOCK();
                  iVar2 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar2 == 0) {
                    operator_delete__(piVar16);
                  }
                }
                plVar5 = plStack_1b8;
                plStack_1b8 = plVar7;
              }
              plStack_1b8 = plVar5;
              if (local_1c0 != (long *)0x0) {
                operator_delete(local_1c0);
              }
              if (local_1c8 != (long *)0x0) {
                LOCK();
                plVar9 = local_1c8 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)(*local_1c8 + 8))();
                }
              }
              piVar16 = (int *)(puStack_1d0 + -0x10);
              if (piVar16 != &emptyString) {
                LOCK();
                iVar2 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (iVar2 == 0) {
                  operator_delete__(piVar16);
                }
              }
              piVar16 = (int *)(local_1d8 + -0x10);
              if (piVar16 != &emptyString) {
                LOCK();
                iVar2 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (iVar2 == 0) {
                  operator_delete__(piVar16);
                }
              }
              plVar9 = local_e8;
              if (local_d0 != (void *)0x0) {
                operator_delete(local_d0);
                plVar9 = local_e8;
              }
              for (; plVar9 != local_e0; plVar9 = plVar9 + 1) {
                piVar16 = (int *)(*plVar9 + -0x10);
                if (piVar16 != &emptyString) {
                  LOCK();
                  iVar2 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar2 == 0) {
                    operator_delete__(piVar16);
                  }
                }
              }
              if (local_e8 != (long *)0x0) {
                operator_delete(local_e8);
              }
              if (local_f0 != (long *)0x0) {
                LOCK();
                plVar9 = local_f0 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)(*local_f0 + 8))();
                }
              }
              piVar16 = (int *)(local_f8 + -0x10);
              if (piVar16 != &emptyString) {
                LOCK();
                iVar2 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (iVar2 == 0) {
                  operator_delete__(piVar16);
                }
              }
              piVar16 = (int *)(local_100 + -0x10);
              if (piVar16 != &emptyString) {
                LOCK();
                iVar2 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (iVar2 == 0) {
                  operator_delete__(piVar16);
                }
              }
              return pSVar6;
            }
          }
          uVar14 = uVar14 + 1;
        } while( true );
      }
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


