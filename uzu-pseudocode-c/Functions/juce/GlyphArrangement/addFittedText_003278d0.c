// Function : addFittedText
// Namespace: juce:GlyphArrangement
// Entry    : 003278d0
// Prototype: undefined addFittedText(float param_1, float param_2, float param_3, float param_4, uint param_5_00, undefined8 param_6_00, GlyphArrangement * this, undefined8 param_8, String * param_9, uint param_10, uint param_11)
// Body     : 003278d0 - 003280c9


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::GlyphArrangement::addFittedText(juce::Font const&, juce::String const&, float, float,
   float, float, juce::Justification, int, float, juce::GlyphArrangementOptions) */

void __thiscall
juce::GlyphArrangement::addFittedText
          (float param_1,float param_2,float param_3,float param_4,uint param_5_00,
          undefined8 param_6_00,GlyphArrangement *this,undefined8 param_8,String *param_9,
          uint param_10,uint param_11)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined8 local_240;
  long local_238;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_230;
  juce local_228 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  void *pvStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  long *plStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  void *pvStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long *local_158;
  long *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
  juce local_120 [40];
  void *local_f8;
  long *local_e0;
  long *local_d8;
  long local_b0;
  juce local_a8 [40];
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  uStack_210 = 0;
  pvStack_1f0 = (void *)0x0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_218 = 9;
  local_1f8 = 0;
  local_240 = param_6_00;
  detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&pvStack_1f0);
  uStack_1c0 = _DAT_005dd140;
  local_1b8 = _UNK_005dd148;
  uStack_1b0 = 0x7fffffffffffffff;
  local_1a8 = &DAT_0061ac58;
                    /* try { // try from 00327994 to 003279aa has its CatchHandler @ 00328135 */
  withGlyphArrangementOptions(local_a8,&local_218,(undefined4 *)&local_240);
                    /* try { // try from 003279ab to 003279d9 has its CatchHandler @ 00328123 */
  createFittedText(param_3,param_4,(ulong)param_5_00,(juce *)&local_238,param_8,param_9,param_10,
                   (uint *)(ulong)param_11,(float *)local_a8);
  piVar12 = (int *)(local_38 + -0x10);
  if (piVar12 == &emptyString) {
LAB_00327a07:
    plVar10 = local_68;
    if (local_68 != local_60) {
LAB_00327e19:
      do {
        plVar11 = (long *)*plVar10;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != local_60);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00327a07;
    operator_delete__(piVar12);
    plVar10 = local_68;
    if (local_68 != local_60) goto LAB_00327e19;
  }
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  piVar12 = (int *)(local_1a8 + -0x10);
  if (piVar12 == &emptyString) {
LAB_00327a6b:
    plVar10 = plStack_1d0;
    plVar11 = local_1d8;
    if (local_1d8 != plStack_1d0) {
LAB_00327e79:
      do {
        plVar4 = (long *)*plVar11;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00327a6b;
    operator_delete__(piVar12);
    plVar10 = plStack_1d0;
    plVar11 = local_1d8;
    if (local_1d8 != plStack_1d0) goto LAB_00327e79;
  }
  if (local_1d8 != (long *)0x0) {
    operator_delete(local_1d8);
  }
  if (pvStack_1f0 != (void *)0x0) {
    operator_delete(pvStack_1f0);
  }
  pfVar6 = *(float **)(local_238 + 0x2b0);
  lVar7 = *(long *)(local_238 + 0x2b8) - (long)pfVar6;
  if (lVar7 != 0) {
    pfVar8 = (float *)((long)pfVar6 + lVar7 + -4);
    uVar9 = (long)pfVar8 - (long)pfVar6;
    if (0xf < (long)uVar9) {
      lVar7 = (uVar9 >> 4) + 1;
      pfVar5 = pfVar6 + 2;
      do {
        pfVar6 = pfVar5;
        if (param_3 < pfVar6[-2]) {
          pfVar6 = pfVar6 + -2;
          goto joined_r0x0032809f;
        }
        if (param_3 < pfVar6[-1]) {
          pfVar6 = pfVar6 + -1;
          goto joined_r0x0032809f;
        }
        if (param_3 < *pfVar6) goto joined_r0x0032809f;
        if (param_3 < pfVar6[1]) {
          pfVar6 = pfVar6 + 1;
          goto joined_r0x0032809f;
        }
        lVar7 = lVar7 + -1;
        uVar9 = uVar9 - 0x10;
        pfVar5 = pfVar6 + 4;
      } while (1 < lVar7);
      pfVar6 = pfVar6 + 2;
    }
    lVar7 = (long)uVar9 >> 2;
    if (lVar7 == 1) {
LAB_00327b5f:
      if (*pfVar6 <= param_3) goto LAB_00327ed4;
    }
    else if (lVar7 == 2) {
LAB_00327b51:
      if (*pfVar6 <= param_3) {
        pfVar6 = pfVar6 + 1;
        goto LAB_00327b5f;
      }
    }
    else {
      if (lVar7 != 3) goto LAB_00327ed4;
      if (*pfVar6 <= param_3) {
        pfVar6 = pfVar6 + 1;
        goto LAB_00327b51;
      }
    }
joined_r0x0032809f:
    if (pfVar6 != pfVar8) {
      uStack_190 = 0;
      pvStack_170 = (void *)0x0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = (long *)0x0;
      plStack_150 = (long *)0x0;
      local_168 = 0;
      uStack_160 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_128 = (undefined1 *)0x0;
      local_198 = 9;
      local_178 = 0;
                    /* try { // try from 00327bd8 to 00327bdc has its CatchHandler @ 0032810c */
      detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()
                ((_lambda___1_ *)&pvStack_170);
      uStack_140 = _DAT_005dd140;
      local_138 = _UNK_005dd148;
      uStack_130 = 0x7fffffffffffffff;
      local_128 = &DAT_0061ac58;
                    /* try { // try from 00327c0d to 00327c1e has its CatchHandler @ 003280fa */
      detail::ShapedTextOptions::withAllowBreakingInsideWord
                ((ShapedTextOptions *)&local_218,&local_198);
                    /* try { // try from 00327c1f to 00327c35 has its CatchHandler @ 003280eb */
      withGlyphArrangementOptions(local_120,&local_218,(undefined4 *)&local_240);
                    /* try { // try from 00327c36 to 00327c66 has its CatchHandler @ 003280d9 */
      createFittedText(param_3,param_4,(ulong)param_5_00,local_228,param_8,param_9,param_10,
                       (uint *)(ulong)param_11,(float *)local_120);
      piVar12 = (int *)(local_b0 + -0x10);
      if (piVar12 == &emptyString) {
LAB_00327c90:
        plVar10 = local_e0;
        if (local_e0 != local_d8) {
LAB_00327f99:
          do {
            plVar11 = (long *)*plVar10;
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar4 = plVar11 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)(*plVar11 + 8))();
              }
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != local_d8);
        }
      }
      else {
        LOCK();
        iVar3 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar3 != 0) goto LAB_00327c90;
        operator_delete__(piVar12);
        plVar10 = local_e0;
        if (local_e0 != local_d8) goto LAB_00327f99;
      }
      if (local_e0 != (long *)0x0) {
        operator_delete(local_e0);
      }
      if (local_f8 != (void *)0x0) {
        operator_delete(local_f8);
      }
      piVar12 = (int *)(local_1a8 + -0x10);
      if (piVar12 == &emptyString) {
LAB_00327cf1:
        plVar10 = local_1d8;
        plVar11 = plStack_1d0;
        if (local_1d8 != plStack_1d0) {
LAB_00327ff9:
          do {
            plVar4 = (long *)*plVar10;
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar11);
        }
      }
      else {
        LOCK();
        iVar3 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar3 != 0) goto LAB_00327cf1;
        operator_delete__(piVar12);
        plVar10 = local_1d8;
        plVar11 = plStack_1d0;
        if (local_1d8 != plStack_1d0) goto LAB_00327ff9;
      }
      if (local_1d8 != (long *)0x0) {
        operator_delete(local_1d8);
      }
      if (pvStack_1f0 != (void *)0x0) {
        operator_delete(pvStack_1f0);
      }
      piVar12 = (int *)(local_128 + -0x10);
      if (piVar12 == &emptyString) {
LAB_00327d4f:
        plVar10 = local_158;
        plVar11 = plStack_150;
        if (local_158 != plStack_150) {
LAB_00328059:
          do {
            plVar4 = (long *)*plVar10;
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar11);
        }
      }
      else {
        LOCK();
        iVar3 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar3 != 0) goto LAB_00327d4f;
        operator_delete__(piVar12);
        plVar10 = local_158;
        plVar11 = plStack_150;
        if (local_158 != plStack_150) goto LAB_00328059;
      }
      if (local_158 != (long *)0x0) {
        operator_delete(local_158);
      }
      if (pvStack_170 != (void *)0x0) {
        operator_delete(pvStack_170);
      }
                    /* try { // try from 00327d87 to 00327d9f has its CatchHandler @ 003280ca */
      addGlyphsFromShapedText(param_1,param_2,(long *)this,(long *)local_228);
      if (local_220 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(local_220 + 8) == 0x100000001) {
          *(undefined8 *)(local_220 + 8) = 0;
          (**(code **)(*(long *)local_220 + 0x10))(local_220);
          (**(code **)(*(long *)local_220 + 0x18))(local_220);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = local_220 + 8;
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = (int)*(long *)(local_220 + 8);
            *(int *)(local_220 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_220);
          }
        }
      }
      goto LAB_00327eed;
    }
  }
LAB_00327ed4:
                    /* try { // try from 00327ed4 to 00327eec has its CatchHandler @ 0032810e */
  addGlyphsFromShapedText(param_1,param_2,(long *)this,&local_238);
LAB_00327eed:
  if (local_230 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(local_230 + 8) == 0x100000001) {
      *(undefined8 *)(local_230 + 8) = 0;
      (**(code **)(*(long *)local_230 + 0x10))(local_230);
      (**(code **)(*(long *)local_230 + 0x18))(local_230);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = local_230 + 8;
        iVar3 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar3 = (int)*(long *)(local_230 + 8);
        *(int *)(local_230 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_230);
      }
    }
  }
  return;
}


