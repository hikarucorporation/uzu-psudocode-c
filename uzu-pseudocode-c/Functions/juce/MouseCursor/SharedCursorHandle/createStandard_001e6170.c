// Function : createStandard
// Namespace: juce:MouseCursor:SharedCursorHandle
// Entry    : 001e6170
// Prototype: int createStandard(undefined8 param_1, undefined8 param_2, undefined8 param_3, SharedCursorHandle * this, ulong param_5)
// Body     : 001e6170 - 001e6976


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::MouseCursor::SharedCursorHandle::createStandard(juce::MouseCursor::StandardCursorType) */

int __thiscall
juce::MouseCursor::SharedCursorHandle::createStandard
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,SharedCursorHandle *this,
          ulong param_5)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  XWindowSystem *pXVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  long *local_e0;
  SharedCursorHandle *local_d8;
  undefined8 *local_d0;
  long *local_c8;
  ulong local_c0;
  long *local_b8 [11];
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined5 uStack_55;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  
  if ((createStandard(juce::MouseCursor::StandardCursorType)::mutex == '\0') &&
     (iVar6 = __cxa_guard_acquire(&createStandard(juce::MouseCursor::StandardCursorType)::mutex),
     iVar6 != 0)) {
    createStandard(juce::MouseCursor::StandardCursorType)::mutex = 0;
    __cxa_guard_release(&createStandard(juce::MouseCursor::StandardCursorType)::mutex);
  }
  if ((createStandard(juce::MouseCursor::StandardCursorType)::cursors == '\0') &&
     (iVar6 = __cxa_guard_acquire(&createStandard(juce::MouseCursor::StandardCursorType)::cursors),
     iVar6 != 0)) {
    __cxa_atexit(std::array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul>::~array,
                 createStandard(juce::MouseCursor::StandardCursorType)::cursors,&__dso_handle);
    __cxa_guard_release(&createStandard(juce::MouseCursor::StandardCursorType)::cursors);
  }
  LOCK();
  bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
  if (bVar17) {
    createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
  }
  UNLOCK();
  if (!bVar17) {
    LOCK();
    bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
    if (bVar17) {
      createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
    }
    UNLOCK();
    if (!bVar17) {
      LOCK();
      bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
      if (bVar17) {
        createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
      }
      UNLOCK();
      if (!bVar17) {
        LOCK();
        bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
        if (bVar17) {
          createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
        }
        UNLOCK();
        if (!bVar17) {
          LOCK();
          bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
          if (bVar17) {
            createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
          }
          UNLOCK();
          if (!bVar17) {
            LOCK();
            bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
            if (bVar17) {
              createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
            }
            UNLOCK();
            if (!bVar17) {
              LOCK();
              bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
              if (bVar17) {
                createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
              }
              UNLOCK();
              if (!bVar17) {
                LOCK();
                bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
                if (bVar17) {
                  createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                }
                UNLOCK();
                if (!bVar17) {
                  LOCK();
                  bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
                  if (bVar17) {
                    createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                  }
                  UNLOCK();
                  if (!bVar17) {
                    LOCK();
                    bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
                    if (bVar17) {
                      createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                    }
                    UNLOCK();
                    if (!bVar17) {
                      LOCK();
                      bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
                      if (bVar17) {
                        createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                      }
                      UNLOCK();
                      if (!bVar17) {
                        LOCK();
                        bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0;
                        if (bVar17) {
                          createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                        }
                        UNLOCK();
                        if (!bVar17) {
                          LOCK();
                          bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex == 0
                          ;
                          if (bVar17) {
                            createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                          }
                          UNLOCK();
                          if (!bVar17) {
                            LOCK();
                            bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex ==
                                     0;
                            if (bVar17) {
                              createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                            }
                            UNLOCK();
                            if (!bVar17) {
                              LOCK();
                              bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::mutex
                                       == 0;
                              if (bVar17) {
                                createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                              }
                              UNLOCK();
                              if (!bVar17) {
                                LOCK();
                                bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::
                                         mutex == 0;
                                if (bVar17) {
                                  createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1;
                                }
                                UNLOCK();
                                if (!bVar17) {
                                  LOCK();
                                  bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::
                                           mutex == 0;
                                  if (bVar17) {
                                    createStandard(juce::MouseCursor::StandardCursorType)::mutex = 1
                                    ;
                                  }
                                  UNLOCK();
                                  if (!bVar17) {
                                    LOCK();
                                    bVar17 = createStandard(juce::MouseCursor::StandardCursorType)::
                                             mutex == 0;
                                    if (bVar17) {
                                      createStandard(juce::MouseCursor::StandardCursorType)::mutex =
                                           1;
                                    }
                                    UNLOCK();
                                    if (!bVar17) {
                                      LOCK();
                                      bVar17 = createStandard(juce::MouseCursor::StandardCursorType)
                                               ::mutex == 0;
                                      if (bVar17) {
                                        createStandard(juce::MouseCursor::StandardCursorType)::mutex
                                             = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar17) {
                                        LOCK();
                                        bVar17 = createStandard(juce::MouseCursor::StandardCursorType)
                                                 ::mutex == 0;
                                        if (bVar17) {
                                          createStandard(juce::MouseCursor::StandardCursorType)::
                                          mutex = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar17) {
                                          LOCK();
                                          bVar17 = 
                                                  createStandard(juce::MouseCursor::StandardCursorType)
                                                  ::mutex == 0;
                                          if (bVar17) {
                                            createStandard(juce::MouseCursor::StandardCursorType)::
                                            mutex = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar17) {
                                            LOCK();
                                            bVar17 = 
                                                  createStandard(juce::MouseCursor::StandardCursorType)
                                                  ::mutex == 0;
                                            if (bVar17) {
                                              createStandard(juce::MouseCursor::StandardCursorType)
                                              ::mutex = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar17) {
                                              sched_yield();
                                              LOCK();
                                              bVar17 = 
                                                  createStandard(juce::MouseCursor::StandardCursorType)
                                                  ::mutex == 0;
                                              if (bVar17) {
                                                createStandard(juce::MouseCursor::StandardCursorType)
                                                ::mutex = 1;
                                              }
                                              UNLOCK();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar16 = (param_5 & 0xffffffff) * 0x10;
  local_c8 = (long *)(createStandard(juce::MouseCursor::StandardCursorType)::cursors + lVar16);
  lVar12 = *(long *)(createStandard(juce::MouseCursor::StandardCursorType)::cursors + lVar16 + 8);
  *(long *)(this + 8) = lVar12;
  local_d8 = this;
  if (lVar12 == 0) {
LAB_001e63e6:
    *(undefined8 *)this = 0;
  }
  else {
    iVar6 = *(int *)(lVar12 + 8);
    do {
      if (iVar6 == 0) {
        *(undefined8 *)(this + 8) = 0;
        goto LAB_001e63e6;
      }
      LOCK();
      iVar3 = *(int *)(lVar12 + 8);
      bVar17 = iVar6 == iVar3;
      if (bVar17) {
        *(int *)(lVar12 + 8) = iVar6 + 1;
      }
      else {
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar17);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001e63e6;
    if (*(int *)(this_00 + 8) == 0) {
      *(undefined8 *)this = 0;
      lVar12 = *(long *)(this_00 + 8);
      if (lVar12 == 0x100000001) goto LAB_001e63bd;
LAB_001e6523:
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = this_00 + 8;
        iVar6 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar6 = (int)lVar12;
        *(int *)(this_00 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
    else {
      lVar12 = *local_c8;
      *(long *)this = lVar12;
      if (lVar12 != 0) goto LAB_001e68a3;
      lVar12 = *(long *)(this_00 + 8);
      if (lVar12 != 0x100000001) goto LAB_001e6523;
LAB_001e63bd:
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
  }
                    /* try { // try from 001e63ed to 001e63fb has its CatchHandler @ 001e69b1 */
  local_c0 = param_5 & 0xffffffff;
  puVar7 = operator_new(0x38);
  puVar7[1] = 0x100000001;
  *puVar7 = &PTR___Sp_counted_base_0070de80;
  local_d0 = puVar7 + 2;
  puVar7[2] = 0;
  puVar7[3] = 0x3ff0000000000000;
  puVar7[4] = 0;
                    /* try { // try from 001e643b to 001e648b has its CatchHandler @ 001e69b6 */
  pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  if (*(long *)(pXVar8 + 0x148) == 0) {
    lVar12 = 0;
    goto switchD_001e6480_caseD_2;
  }
  lVar12 = 0;
  uVar15 = 0x96;
  switch((int)local_c0) {
  case 1:
    plVar9 = operator_new(0x60);
    lVar12 = _UNK_005dcc68;
    plVar9[1] = _DAT_005dcc60;
    plVar9[2] = lVar12;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    *(undefined4 *)(plVar9 + 9) = 0;
    *plVar9 = (long)&PTR__SoftwarePixelData_00711df0;
    plVar9[0xb] = 0x4000000004;
    pvVar10 = calloc(0x400,1);
    plVar9[10] = (long)pvVar10;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
                    /* try { // try from 001e64e6 to 001e64f4 has its CatchHandler @ 001e6979 */
    local_b8[0] = plVar9;
    lVar12 = XWindowSystem::createCustomMouseCursorInfo
                       (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,(long)pXVar8,
                        (long *)local_b8,0);
    local_e0 = local_b8[0];
    goto LAB_001e6732;
  default:
    goto switchD_001e6480_caseD_2;
  case 4:
    uVar15 = 0x98;
    break;
  case 5:
    uVar15 = 0x22;
    break;
  case 6:
    uStack_48 = GIF_005e7100._112_1_;
    uStack_47 = ram0x005e7171;
    uStack_59._1_3_ = GIF_005e7100._96_3_;
    uStack_55 = GIF_005e7100._99_5_;
    uStack_50 = GIF_005e7100._104_1_;
    uStack_4f = GIF_005e7100._105_7_;
    local_b8[10] = (long *)GIF_005e7100._80_8_;
    uStack_60 = GIF_005e7100._88_7_;
    uStack_59._0_1_ = GIF_005e7100._95_1_;
    local_b8[8] = (long *)GIF_005e7100._64_8_;
    local_b8[9] = (long *)GIF_005e7100._72_8_;
    local_b8[6] = (long *)GIF_005e7100._48_8_;
    local_b8[7] = (long *)GIF_005e7100._56_8_;
    local_b8[4] = (long *)GIF_005e7100._32_8_;
    local_b8[5] = (long *)GIF_005e7100._40_8_;
    local_b8[2] = (long *)GIF_005e7100._16_8_;
    local_b8[3] = (long *)GIF_005e7100._24_8_;
    local_b8[0] = (long *)GIF_005e7100._0_8_;
    local_b8[1] = (long *)GIF_005e7100._8_8_;
                    /* try { // try from 001e65cb to 001e65de has its CatchHandler @ 001e69b6 */
    ImageFileFormat::loadFrom((ImageFileFormat *)&local_e0,(long)local_b8,0x79);
                    /* try { // try from 001e65df to 001e65f5 has its CatchHandler @ 001e6977 */
    lVar12 = XWindowSystem::createCustomMouseCursorInfo
                       (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                        (long)pXVar8,(long *)&local_e0,0x300000001);
    goto LAB_001e6732;
  case 7:
    uVar15 = 0x3c;
    break;
  case 8:
    local_b8[10] = (long *)GIF_005e8720._80_8_;
    uStack_60 = GIF_005e8720._88_7_;
    local_b8[8] = (long *)GIF_005e8720._64_8_;
    local_b8[9] = (long *)GIF_005e8720._72_8_;
    local_b8[6] = (long *)GIF_005e8720._48_8_;
    local_b8[7] = (long *)GIF_005e8720._56_8_;
    local_b8[4] = (long *)GIF_005e8720._32_8_;
    local_b8[5] = (long *)GIF_005e8720._40_8_;
    local_b8[2] = (long *)GIF_005e8720._16_8_;
    local_b8[3] = (long *)GIF_005e8720._24_8_;
    local_b8[0] = (long *)GIF_005e8720._0_8_;
    local_b8[1] = (long *)GIF_005e8720._8_8_;
    uStack_59 = 0x3b000287;
                    /* try { // try from 001e66f3 to 001e6706 has its CatchHandler @ 001e69b6 */
    ImageFileFormat::loadFrom((ImageFileFormat *)&local_e0,(long)local_b8,99);
                    /* try { // try from 001e6707 to 001e6729 has its CatchHandler @ 001e6983 */
    pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    lVar12 = XWindowSystem::createCustomMouseCursorInfo
                       (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                        (long)pXVar8,(long *)&local_e0,0x700000008);
LAB_001e6732:
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar9 = local_e0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)(*local_e0 + 8))();
      }
    }
    goto switchD_001e6480_caseD_2;
  case 9:
    uVar15 = 0x6c;
    break;
  case 10:
    uVar15 = 0x74;
    break;
  case 0xb:
    uVar15 = 0x34;
    break;
  case 0xc:
    uVar15 = 0x8a;
    break;
  case 0xd:
    uVar15 = 0x10;
    break;
  case 0xe:
    uVar15 = 0x46;
    break;
  case 0xf:
    uVar15 = 0x60;
    break;
  case 0x10:
    uVar15 = 0x86;
    break;
  case 0x11:
    uVar15 = 0x88;
    break;
  case 0x12:
    uVar15 = 0xc;
  case 3:
    break;
  case 0x13:
    uVar15 = 0xe;
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar12 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar12 != 0)) {
                    /* try { // try from 001e67d3 to 001e67e0 has its CatchHandler @ 001e69b6 */
    lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar11 + 0x210))(lVar12);
  }
                    /* try { // try from 001e67e1 to 001e67f2 has its CatchHandler @ 001e69a7 */
  lVar12 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar12 = (**(code **)(lVar12 + 0x70))(*(undefined8 *)(pXVar8 + 0x148),uVar15);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar11 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar11 != 0)) {
                    /* try { // try from 001e680e to 001e681b has its CatchHandler @ 001e699f */
    lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar13 + 0x360))(lVar11);
  }
switchD_001e6480_caseD_2:
  puVar5 = local_d0;
  puVar14 = (undefined8 *)
            (createStandard(juce::MouseCursor::StandardCursorType)::cursors + lVar16 + 8);
  puVar7[5] = lVar12;
  *(int *)(puVar7 + 6) = (int)local_c0;
  *(undefined1 *)((long)puVar7 + 0x34) = 1;
  *local_c8 = (long)local_d0;
  puVar4 = PTR___libc_single_threaded_00715c50;
  if (*PTR___libc_single_threaded_00715c50 == '\0') {
    LOCK();
    *(int *)((long)puVar7 + 0xc) = *(int *)((long)puVar7 + 0xc) + 1;
    UNLOCK();
    plVar9 = (long *)*puVar14;
  }
  else {
    *(int *)((long)puVar7 + 0xc) = *(int *)((long)puVar7 + 0xc) + 1;
    plVar9 = (long *)*puVar14;
  }
  if (plVar9 != (long *)0x0) {
    if (*puVar4 == '\0') {
      LOCK();
      piVar1 = (int *)((long)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar6 = *(int *)((long)plVar9 + 0xc);
      *(int *)((long)plVar9 + 0xc) = iVar6 + -1;
    }
    if (iVar6 == 1) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *puVar14 = puVar7;
  *(undefined8 **)local_d8 = puVar5;
  *(undefined8 **)(local_d8 + 8) = puVar7;
LAB_001e68a3:
  iVar6 = createStandard(juce::MouseCursor::StandardCursorType)::mutex;
  LOCK();
  createStandard(juce::MouseCursor::StandardCursorType)::mutex = 0;
  UNLOCK();
  return iVar6;
}


