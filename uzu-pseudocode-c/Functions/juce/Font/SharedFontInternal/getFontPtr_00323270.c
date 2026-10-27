// Function : getFontPtr
// Namespace: juce:Font:SharedFontInternal
// Entry    : 00323270
// Prototype: undefined getFontPtr(undefined8 * param_1, long param_2, long * param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 00323270 - 00323f99


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Font::SharedFontInternal::getFontPtr(juce::Font const&) */

void __cdecl
juce::Font::SharedFontInternal::getFontPtr
          (undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  long *plVar1;
  _Rb_tree_node_base *p_Var2;
  pthread_mutex_t *__mutex;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  _List_node_base *p_Var16;
  undefined4 *puVar17;
  char cVar18;
  undefined1 *puVar19;
  char cVar20;
  SharedFontInternal *this;
  int *piVar21;
  ulong uVar22;
  _Rb_tree_node_base *p_Var23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float local_70;
  hb_font_t *local_50;
  long *local_40;
  undefined8 *local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
                    /* try { // try from 00323296 to 003232a5 has its CatchHandler @ 00323fff */
  getTypefacePtr((SharedFontInternal *)&local_40,param_2,param_3,param_4,param_5,param_6);
  if (local_40 == (long *)0x0) {
    *param_1 = 0;
    goto LAB_00323eef;
  }
                    /* try { // try from 003232b7 to 003232db has its CatchHandler @ 00324009 */
  auVar28 = (**(code **)(*local_40 + 0x18))();
  puVar9 = auVar28._0_8_;
  this = (SharedFontInternal *)*param_3;
  local_70 = *(float *)(this + 0x68);
  if (local_70 <= 0.0) {
    uVar3 = getAscentDescent(this,param_3,auVar28._8_8_,param_4,param_5,param_6);
    fVar26 = (float)((ulong)uVar3 >> 0x20) + (float)uVar3;
    local_70 = 0.0;
    this = (SharedFontInternal *)*param_3;
    if (0.0 < fVar26) {
      local_70 = *(float *)(this + 100) / fVar26;
    }
  }
  fVar26 = *(float *)(this + 0x70);
  __mutex = (pthread_mutex_t *)puVar9[0xe];
  local_38 = param_1;
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* try { // try from 00323f8c to 00323f92 has its CatchHandler @ 00324009 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  p_Var2 = (_Rb_tree_node_base *)(puVar9 + 5);
  if ((_Rb_tree_node_base *)puVar9[6] != (_Rb_tree_node_base *)0x0) {
    p_Var23 = (_Rb_tree_node_base *)puVar9[6];
    p_Var15 = p_Var2;
    do {
      while( true ) {
        p_Var12 = p_Var23;
        fVar27 = *(float *)(p_Var12 + 0x24);
        cVar20 = (local_70 != fVar27) * '\x02';
        if (local_70 < fVar27) {
          cVar20 = '\x01';
        }
        if (fVar27 < local_70) {
          cVar20 = -1;
        }
        if ((cVar20 == -1) ||
           ((cVar20 == '\0' &&
            (*(float *)(p_Var12 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var12 + 0x20))))) break;
        p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x10);
        p_Var15 = p_Var12;
        if (*(_Rb_tree_node_base **)(p_Var12 + 0x10) == (_Rb_tree_node_base *)0x0)
        goto LAB_003233c9;
      }
      p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var12 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_003233c9:
    if (p_Var15 == p_Var2) goto LAB_0032341f;
    fVar27 = *(float *)(p_Var15 + 0x24);
    cVar20 = '\x01';
    if (local_70 <= fVar27) {
      cVar20 = (local_70 != fVar27) * '\x02';
    }
    cVar4 = -1;
    if (fVar27 <= local_70) {
      cVar4 = cVar20;
    }
    if ((cVar4 == -1) || ((cVar4 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20)))))
    goto LAB_0032341f;
    pvVar10 = *(void **)(p_Var15 + 0x30);
    puVar9[0xc] = puVar9[0xc] + -1;
    std::__detail::_List_node_base::_M_unhook();
    operator_delete(pvVar10);
                    /* try { // try from 0032390b to 00323914 has its CatchHandler @ 00323faa */
    p_Var16 = operator_new(0x18);
    *(_Rb_tree_node_base **)(p_Var16 + 0x10) = p_Var15;
    std::__detail::_List_node_base::_M_hook(p_Var16);
    puVar9[0xc] = puVar9[0xc] + 1;
    goto LAB_00323eb0;
  }
LAB_0032341f:
  iVar6 = *(int *)(puVar9 + 0xd);
  pthread_mutex_unlock(__mutex);
  piVar21 = (int *)*puVar9;
  if (piVar21 == (int *)0x0) {
    piVar21 = (int *)&_hb_Null_hb_font_t;
    puVar19 = PTR__hb_Null_hb_face_t_00718b48;
  }
  else {
    puVar19 = *(undefined1 **)(piVar21 + 8);
  }
  if ((int *)puVar19 == (int *)0x0) {
    puVar19 = _hb_Null_hb_face_t;
  }
  local_50 = calloc(1,0xc0);
  if (local_50 == (hb_font_t *)0x0) {
    local_50 = (hb_font_t *)&_hb_Null_hb_font_t;
    iVar8 = _DAT_00718b2c;
  }
  else {
    *(undefined4 *)local_50 = 1;
    *(undefined4 *)(local_50 + 4) = 1;
    *(undefined8 *)(local_50 + 8) = 0;
    if (*(int *)((long)puVar19 + 4) != 0) {
      *(int *)((long)puVar19 + 4) = 0;
    }
    *(undefined **)(local_50 + 0x18) = &_hb_Null_hb_font_t;
    if (*(int *)puVar19 != 0) {
      LOCK();
      *(int *)puVar19 = *(int *)puVar19 + 1;
      UNLOCK();
    }
    *(undefined1 **)(local_50 + 0x20) = puVar19;
    *(undefined4 **)(local_50 + 0x90) = &_hb_font_funcs_default;
    *(hb_font_t **)(local_50 + 0xa8) = local_50;
    uVar7 = *(uint *)((long)puVar19 + 0x14);
    if (uVar7 == 0) {
                    /* try { // try from 00323f45 to 00323f49 has its CatchHandler @ 00323ffd */
      puVar17 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)((long)puVar19 + 0x70));
      uVar5 = *(ushort *)((long)puVar17 + 0x12) << 8 | *(ushort *)((long)puVar17 + 0x12) >> 8;
      uVar7 = 1000;
      if (uVar5 - 0x10 < 0x3ff1) {
        uVar7 = (uint)uVar5;
      }
      *(uint *)((long)puVar19 + 0x14) = uVar7;
    }
    *(uint *)(local_50 + 0x2c) = uVar7;
    *(uint *)(local_50 + 0x28) = uVar7;
    local_50[0x38] = (hb_font_t)0x1;
    *(undefined8 *)(local_50 + 0x4c) = 0x3f8000003f800000;
    uVar3 = _UNK_005dd378;
    *(undefined8 *)(local_50 + 0x58) = _DAT_005dd370;
    *(undefined8 *)(local_50 + 0x60) = uVar3;
    *(undefined4 *)(local_50 + 0x74) = 0xffffffff;
    iVar8 = *(int *)(local_50 + 4);
  }
  if (iVar8 != 0) {
    if (*piVar21 != 0) {
      LOCK();
      *piVar21 = *piVar21 + 1;
      UNLOCK();
    }
    *(int **)(local_50 + 0x18) = piVar21;
    *(int *)(local_50 + 0x28) = piVar21[10];
    *(int *)(local_50 + 0x2c) = piVar21[0xb];
    *(int *)(local_50 + 0x30) = piVar21[0xc];
    *(int *)(local_50 + 0x34) = piVar21[0xd];
    local_50[0x38] = *(hb_font_t *)(piVar21 + 0xe);
    *(int *)(local_50 + 0x44) = piVar21[0x11];
    *(int *)(local_50 + 0x68) = piVar21[0x1a];
    *(int *)(local_50 + 0x6c) = piVar21[0x1b];
    *(int *)(local_50 + 0x70) = piVar21[0x1c];
    uVar7 = piVar21[0x1e];
    uVar22 = (ulong)uVar7;
    if (uVar22 != 0) {
      pvVar10 = calloc(uVar22,4);
      pvVar11 = calloc(uVar22,4);
      if ((pvVar10 == (void *)0x0) || (pvVar11 == (void *)0x0)) {
        free(pvVar10);
        free(pvVar11);
      }
      else {
        memcpy(pvVar10,*(void **)(piVar21 + 0x20),uVar22 << 2);
        memcpy(pvVar11,*(void **)(piVar21 + 0x22),uVar22 << 2);
        free(*(void **)(local_50 + 0x80));
        free(*(void **)(local_50 + 0x88));
        *(void **)(local_50 + 0x80) = pvVar10;
        *(void **)(local_50 + 0x88) = pvVar11;
        *(uint *)(local_50 + 0x78) = uVar7;
                    /* try { // try from 00323603 to 00323617 has its CatchHandler @ 00323ffd */
        hb_font_t::mults_changed(local_50);
      }
    }
    hb_font_t::mults_changed(local_50);
  }
  if (*(int *)(local_50 + 4) != 0) {
    if ((*(float *)(local_50 + 0x70) != local_70) ||
       (NAN(*(float *)(local_50 + 0x70)) || NAN(local_70))) {
      *(int *)(local_50 + 0x10) = *(int *)(local_50 + 0x10) + 1;
      *(float *)(local_50 + 0x70) = local_70;
    }
  }
  if (*(int *)(local_50 + 4) != 0) {
    iVar8 = (int)(fVar26 * local_70 * DAT_005de568);
    fVar27 = DAT_005de568 * local_70;
    if ((*(int *)(local_50 + 0x28) != iVar8) || (*(int *)(local_50 + 0x2c) != (int)fVar27)) {
      *(int *)(local_50 + 0x10) = *(int *)(local_50 + 0x10) + 1;
      *(int *)(local_50 + 0x28) = iVar8;
      *(int *)(local_50 + 0x2c) = (int)fVar27;
                    /* try { // try from 00323689 to 00323690 has its CatchHandler @ 00323fbc */
      hb_font_t::mults_changed(local_50);
    }
  }
  iVar8 = pthread_mutex_lock(__mutex);
  if (iVar8 != 0) {
                    /* try { // try from 00323f93 to 00323f99 has its CatchHandler @ 00323fee */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  if ((iVar6 == *(int *)(puVar9 + 0xd)) ||
     ((_Rb_tree_node_base *)puVar9[6] == (_Rb_tree_node_base *)0x0)) {
LAB_00323790:
    *(int *)(puVar9 + 0xd) = *(int *)(puVar9 + 0xd) + 1;
    uVar22 = puVar9[9];
    while (0x7f < uVar22) {
      pvVar10 = (void *)puVar9[10];
      pvVar11 = (void *)std::_Rb_tree_rebalance_for_erase
                                  (*(_Rb_tree_node_base **)((long)pvVar10 + 0x10),p_Var2);
      if (*(int **)((long)pvVar11 + 0x28) != (int *)0x0) {
                    /* try { // try from 00323819 to 0032381d has its CatchHandler @ 0032403a */
        hb_font_destroy(*(int **)((long)pvVar11 + 0x28));
      }
      operator_delete(pvVar11);
      puVar9[9] = puVar9[9] + -1;
      puVar9[0xc] = puVar9[0xc] + -1;
      std::__detail::_List_node_base::_M_unhook();
      operator_delete(pvVar10);
      uVar22 = puVar9[9];
    }
    p_Var23 = (_Rb_tree_node_base *)puVar9[6];
    p_Var15 = p_Var2;
    if ((_Rb_tree_node_base *)puVar9[6] != (_Rb_tree_node_base *)0x0) {
      do {
        while( true ) {
          p_Var12 = p_Var23;
          fVar27 = *(float *)(p_Var12 + 0x24);
          cVar20 = (local_70 != fVar27) * '\x02';
          if (local_70 < fVar27) {
            cVar20 = '\x01';
          }
          if (fVar27 < local_70) {
            cVar20 = -1;
          }
          if ((cVar20 == -1) ||
             ((cVar20 == '\0' &&
              (*(float *)(p_Var12 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var12 + 0x20)))))
          break;
          p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x10);
          p_Var15 = p_Var12;
          if (*(_Rb_tree_node_base **)(p_Var12 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00323879;
        }
        p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var12 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00323879:
      if (p_Var15 == p_Var2) {
        p_Var15 = p_Var2;
        goto LAB_00323940;
      }
      fVar27 = *(float *)(p_Var15 + 0x24);
      cVar20 = '\x01';
      if (local_70 <= fVar27) {
        cVar20 = (local_70 != fVar27) * '\x02';
      }
      cVar4 = -1;
      if (fVar27 <= local_70) {
        cVar4 = cVar20;
      }
      if ((cVar4 == -1) || ((cVar4 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20))))) {
        goto LAB_00323940;
      }
      if (local_50 != (hb_font_t *)0x0) {
                    /* try { // try from 00323bd8 to 00323bdc has its CatchHandler @ 00323fa2 */
        hb_font_destroy((int *)local_50);
      }
      goto LAB_00323e86;
    }
LAB_00323940:
                    /* try { // try from 00323940 to 00323949 has its CatchHandler @ 00323fc9 */
    p_Var12 = operator_new(0x38);
    *(float *)(p_Var12 + 0x20) = fVar26;
    *(float *)(p_Var12 + 0x24) = local_70;
    *(hb_font_t **)(p_Var12 + 0x28) = local_50;
    *(undefined8 *)(p_Var12 + 0x30) = 0;
    p_Var23 = p_Var2;
    if (p_Var15 == p_Var2) {
      if (puVar9[9] == 0) {
LAB_00323a9e:
        p_Var13 = (_Rb_tree_node_base *)puVar9[6];
        if ((_Rb_tree_node_base *)puVar9[6] == (_Rb_tree_node_base *)0x0) goto LAB_00323d14;
        do {
          while( true ) {
            p_Var15 = p_Var13;
            fVar27 = *(float *)(p_Var15 + 0x24);
            cVar20 = (local_70 != fVar27) * '\x02';
            if (fVar27 < local_70) {
              cVar20 = '\x01';
            }
            if (local_70 < fVar27) {
              cVar20 = -1;
            }
            if ((cVar20 == -1) || ((cVar20 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20)))))
            break;
            p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x18);
            if (*(_Rb_tree_node_base **)(p_Var15 + 0x18) == (_Rb_tree_node_base *)0x0)
            goto LAB_00323c93;
          }
          p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x10);
        } while (*(_Rb_tree_node_base **)(p_Var15 + 0x10) != (_Rb_tree_node_base *)0x0);
LAB_00323d24:
        p_Var14 = p_Var15;
        p_Var23 = p_Var15;
        if (p_Var15 == (_Rb_tree_node_base *)puVar9[7]) goto LAB_00323da1;
LAB_00323d32:
        p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var23);
        goto LAB_00323d52;
      }
      p_Var15 = (_Rb_tree_node_base *)puVar9[8];
      fVar27 = *(float *)(p_Var15 + 0x24);
      cVar20 = '\x01';
      if (fVar27 <= local_70) {
        cVar20 = (local_70 != fVar27) * '\x02';
      }
      cVar4 = -1;
      if (local_70 <= fVar27) {
        cVar4 = cVar20;
      }
      if ((cVar4 != -1) &&
         ((cVar4 != '\0' ||
          (fVar26 < *(float *)(p_Var15 + 0x20) || fVar26 == *(float *)(p_Var15 + 0x20)))))
      goto LAB_00323a9e;
LAB_00323be7:
      p_Var13 = p_Var15;
      p_Var15 = (_Rb_tree_node_base *)0x0;
LAB_00323db0:
      bVar25 = true;
      bVar24 = p_Var15 != (_Rb_tree_node_base *)0x0;
      p_Var15 = p_Var13;
      if (bVar24) goto LAB_00323e60;
      if (p_Var13 != p_Var2) {
        fVar27 = *(float *)(p_Var13 + 0x24);
        cVar20 = (local_70 != fVar27) * '\x02';
        if (fVar27 < local_70) {
          cVar20 = '\x01';
        }
        if (local_70 < fVar27) {
          cVar20 = -1;
        }
        if (cVar20 == '\0') {
          fVar27 = *(float *)(p_Var13 + 0x20);
          cVar20 = (fVar26 != fVar27) * '\x02';
          if (fVar27 < fVar26) {
            cVar20 = '\x01';
          }
          if (fVar26 < fVar27) {
            cVar20 = -1;
          }
        }
        bVar25 = cVar20 == -1;
      }
    }
    else {
      fVar27 = *(float *)(p_Var15 + 0x24);
      cVar20 = (local_70 != fVar27) * '\x02';
      cVar4 = '\x01';
      if (local_70 <= fVar27) {
        cVar4 = cVar20;
      }
      cVar18 = -1;
      if (fVar27 <= local_70) {
        cVar18 = cVar4;
      }
      if ((cVar18 != -1) && ((cVar18 != '\0' || (*(float *)(p_Var15 + 0x20) <= fVar26)))) {
        if (local_70 < fVar27) {
          cVar20 = '\x01';
        }
        cVar4 = -1;
        if (local_70 <= fVar27) {
          cVar4 = cVar20;
        }
        if ((cVar4 != -1) &&
           ((cVar4 != '\0' ||
            (!(*(float *)(p_Var15 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var15 + 0x20))))))
        goto LAB_00323e3d;
        if ((_Rb_tree_node_base *)puVar9[8] == p_Var15) goto LAB_00323be7;
        p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
        fVar27 = *(float *)(p_Var14 + 0x24);
        cVar20 = '\x01';
        if (local_70 <= fVar27) {
          cVar20 = (local_70 != fVar27) * '\x02';
        }
        cVar4 = -1;
        if (fVar27 <= local_70) {
          cVar4 = cVar20;
        }
        if ((cVar4 == -1) || ((cVar4 == '\0' && (fVar26 < *(float *)(p_Var14 + 0x20))))) {
          p_Var23 = p_Var15 + 0x18;
          p_Var13 = p_Var15;
          p_Var15 = (_Rb_tree_node_base *)0x0;
          if (*(long *)p_Var23 != 0) {
            p_Var13 = p_Var14;
            p_Var15 = p_Var14;
          }
          goto LAB_00323db0;
        }
        p_Var13 = (_Rb_tree_node_base *)puVar9[6];
        if ((_Rb_tree_node_base *)puVar9[6] != (_Rb_tree_node_base *)0x0) {
          do {
            while( true ) {
              p_Var15 = p_Var13;
              fVar27 = *(float *)(p_Var15 + 0x24);
              cVar20 = (local_70 != fVar27) * '\x02';
              if (fVar27 < local_70) {
                cVar20 = '\x01';
              }
              if (local_70 < fVar27) {
                cVar20 = -1;
              }
              if ((cVar20 == -1) || ((cVar20 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20)))))
              break;
              p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x18);
              if (*(_Rb_tree_node_base **)(p_Var15 + 0x18) == (_Rb_tree_node_base *)0x0)
              goto LAB_00323c93;
            }
            p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x10);
          } while (*(_Rb_tree_node_base **)(p_Var15 + 0x10) != (_Rb_tree_node_base *)0x0);
          goto LAB_00323d24;
        }
LAB_00323d14:
        p_Var14 = p_Var2;
        if (p_Var2 != (_Rb_tree_node_base *)puVar9[7]) goto LAB_00323d32;
LAB_00323da1:
        p_Var15 = (_Rb_tree_node_base *)0x0;
        p_Var13 = p_Var14;
        if (p_Var14 == (_Rb_tree_node_base *)0x0) goto LAB_00323e3d;
        goto LAB_00323db0;
      }
      p_Var14 = (_Rb_tree_node_base *)puVar9[7];
      if (p_Var14 != p_Var15) {
        p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var15);
        fVar27 = *(float *)(p_Var13 + 0x24);
        cVar20 = '\x01';
        if (fVar27 <= local_70) {
          cVar20 = (local_70 != fVar27) * '\x02';
        }
        cVar4 = -1;
        if (local_70 <= fVar27) {
          cVar4 = cVar20;
        }
        if ((cVar4 == -1) ||
           ((cVar4 == '\0' &&
            (*(float *)(p_Var13 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var13 + 0x20))))) {
          if (*(long *)(p_Var13 + 0x18) == 0) {
            p_Var15 = (_Rb_tree_node_base *)0x0;
          }
          else {
            p_Var13 = p_Var15;
          }
          goto LAB_00323db0;
        }
        p_Var13 = (_Rb_tree_node_base *)puVar9[6];
        while (p_Var13 != (_Rb_tree_node_base *)0x0) {
          while( true ) {
            p_Var15 = p_Var13;
            fVar27 = *(float *)(p_Var15 + 0x24);
            cVar20 = (local_70 != fVar27) * '\x02';
            if (fVar27 < local_70) {
              cVar20 = '\x01';
            }
            if (local_70 < fVar27) {
              cVar20 = -1;
            }
            if ((cVar20 == -1) || ((cVar20 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20)))))
            break;
            p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x18);
            if (*(_Rb_tree_node_base **)(p_Var15 + 0x18) == (_Rb_tree_node_base *)0x0)
            goto LAB_00323c93;
          }
          p_Var23 = p_Var15;
          p_Var13 = *(_Rb_tree_node_base **)(p_Var15 + 0x10);
        }
        if (p_Var23 != p_Var14) {
          p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var23);
          goto LAB_00323d52;
        }
        goto LAB_00323da1;
      }
LAB_00323e60:
      bVar25 = true;
    }
    std::_Rb_tree_insert_and_rebalance(bVar25,p_Var12,p_Var15,p_Var2);
    puVar9[9] = puVar9[9] + 1;
    p_Var15 = p_Var12;
    goto LAB_00323e86;
  }
  p_Var23 = (_Rb_tree_node_base *)puVar9[6];
  p_Var15 = p_Var2;
  do {
    while( true ) {
      p_Var12 = p_Var23;
      fVar27 = *(float *)(p_Var12 + 0x24);
      cVar20 = (local_70 != fVar27) * '\x02';
      if (local_70 < fVar27) {
        cVar20 = '\x01';
      }
      if (fVar27 < local_70) {
        cVar20 = -1;
      }
      if ((cVar20 == -1) ||
         ((cVar20 == '\0' &&
          (*(float *)(p_Var12 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var12 + 0x20))))) break;
      p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x10);
      p_Var15 = p_Var12;
      if (*(_Rb_tree_node_base **)(p_Var12 + 0x10) == (_Rb_tree_node_base *)0x0) goto LAB_00323739;
    }
    p_Var23 = *(_Rb_tree_node_base **)(p_Var12 + 0x18);
  } while (*(_Rb_tree_node_base **)(p_Var12 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00323739:
  if (p_Var15 == p_Var2) goto LAB_00323790;
  fVar27 = *(float *)(p_Var15 + 0x24);
  cVar20 = '\x01';
  if (local_70 <= fVar27) {
    cVar20 = (local_70 != fVar27) * '\x02';
  }
  cVar4 = -1;
  if (fVar27 <= local_70) {
    cVar4 = cVar20;
  }
  if ((cVar4 == -1) || ((cVar4 == '\0' && (fVar26 < *(float *)(p_Var15 + 0x20)))))
  goto LAB_00323790;
                    /* try { // try from 00323bf7 to 00323c00 has its CatchHandler @ 00323f9a */
  hb_font_destroy((int *)local_50);
  goto LAB_00323eb3;
LAB_00323c93:
  p_Var23 = p_Var15;
LAB_00323d52:
  fVar27 = *(float *)(p_Var15 + 0x24);
  cVar20 = '\x01';
  if (fVar27 <= local_70) {
    cVar20 = (local_70 != fVar27) * '\x02';
  }
  cVar4 = -1;
  if (local_70 <= fVar27) {
    cVar4 = cVar20;
  }
  p_Var14 = p_Var23;
  if ((cVar4 == -1) ||
     ((cVar4 == '\0' &&
      (*(float *)(p_Var15 + 0x20) <= fVar26 && fVar26 != *(float *)(p_Var15 + 0x20)))))
  goto LAB_00323da1;
LAB_00323e3d:
                    /* try { // try from 00323e3d to 00323e46 has its CatchHandler @ 00323fb4 */
  hb_font_destroy((int *)local_50);
  operator_delete(p_Var12);
LAB_00323e86:
                    /* try { // try from 00323e86 to 00323e8f has its CatchHandler @ 00323fd8 */
  p_Var16 = operator_new(0x18);
  *(_Rb_tree_node_base **)(p_Var16 + 0x10) = p_Var15;
  std::__detail::_List_node_base::_M_hook(p_Var16);
  puVar9[0xc] = puVar9[0xc] + 1;
LAB_00323eb0:
  *(_List_node_base **)(p_Var15 + 0x30) = p_Var16;
LAB_00323eb3:
  pthread_mutex_unlock(__mutex);
  piVar21 = *(int **)(p_Var15 + 0x28);
  *local_38 = piVar21;
  if ((piVar21 != (int *)0x0) && (*piVar21 != 0)) {
    LOCK();
    *piVar21 = *piVar21 + 1;
    UNLOCK();
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_40 + 8))();
    }
  }
LAB_00323eef:
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return;
}


