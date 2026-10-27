// Function : dispatchPendingEvents
// Namespace: juce:InternalRunLoop
// Entry    : 00481450
// Prototype: undefined8 dispatchPendingEvents(InternalRunLoop * this)
// Body     : 00481450 - 0048178d


/* juce::InternalRunLoop::dispatchPendingEvents() */

undefined8 __thiscall juce::InternalRunLoop::dispatchPendingEvents(InternalRunLoop *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  InternalRunLoop *pIVar2;
  short sVar3;
  long lVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  InternalRunLoop *pIVar14;
  undefined8 *puVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  InternalRunLoop *pIVar21;
  ulong uVar22;
  InternalRunLoop *pIVar23;
  undefined8 *puVar24;
  
  puVar8 = PTR___libc_single_threaded_00715c50;
  lVar10 = *(long *)(this + 0x58);
  lVar4 = *(long *)(this + 0x60);
  if (lVar4 != lVar10) {
    lVar18 = lVar10;
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar18 + 8);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (*puVar8 == '\0') {
            LOCK();
            p_Var1 = this_00 + 8;
            iVar9 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = (int)*(long *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          }
        }
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != lVar4);
    *(long *)(this + 0x60) = lVar10;
  }
  pthread_mutex_lock((pthread_mutex_t *)this);
  pthread_mutex_lock((pthread_mutex_t *)this);
                    /* try { // try from 0048151a to 00481520 has its CatchHandler @ 00481798 */
  iVar9 = poll(*(pollfd **)(this + 0x70),
               *(long *)(this + 0x78) - (long)*(pollfd **)(this + 0x70) >> 3,0);
  pthread_mutex_unlock((pthread_mutex_t *)this);
  if (iVar9 != 0) {
    piVar16 = *(int **)(this + 0x70);
    piVar5 = *(int **)(this + 0x78);
    if (piVar16 != piVar5) {
      pIVar2 = this + 0x30;
      do {
        sVar3 = *(short *)((long)piVar16 + 6);
        *(undefined2 *)((long)piVar16 + 6) = 0;
        if ((sVar3 != 0) &&
           (pIVar14 = *(InternalRunLoop **)(this + 0x38), pIVar14 != (InternalRunLoop *)0x0)) {
          pIVar23 = pIVar2;
          do {
            pIVar21 = pIVar14 + 0x18;
            if (*piVar16 <= *(int *)(pIVar14 + 0x20)) {
              pIVar21 = pIVar14 + 0x10;
              pIVar23 = pIVar14;
            }
            pIVar14 = *(InternalRunLoop **)pIVar21;
          } while (pIVar14 != (InternalRunLoop *)0x0);
          if (pIVar23 != pIVar2) {
            if (*piVar16 < *(int *)(pIVar23 + 0x20)) {
              pIVar23 = pIVar2;
            }
            if (pIVar23 != pIVar2) {
              puVar24 = *(undefined8 **)(this + 0x60);
              if (puVar24 == *(undefined8 **)(this + 0x68)) {
                puVar6 = *(undefined8 **)(this + 0x58);
                lVar10 = (long)puVar24 - (long)puVar6;
                if (lVar10 == 0x7ffffffffffffff0) {
                    /* try { // try from 00481782 to 0048178d has its CatchHandler @ 0048178e */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar19 = lVar10 >> 4;
                uVar11 = uVar19;
                if (lVar10 == 0) {
                  uVar11 = 1;
                }
                uVar22 = uVar11 + uVar19;
                if (0x7ffffffffffffff < uVar22) {
                  uVar22 = 0x7ffffffffffffff;
                }
                if (CARRY8(uVar11,uVar19)) {
                  uVar22 = 0x7ffffffffffffff;
                }
                    /* try { // try from 00481660 to 00481667 has its CatchHandler @ 00481793 */
                puVar12 = operator_new(uVar22 * 0x10);
                puVar12[uVar19 * 2] = *(undefined8 *)(pIVar23 + 0x28);
                lVar10 = *(long *)(pIVar23 + 0x30);
                puVar12[uVar19 * 2 + 1] = lVar10;
                if (lVar10 != 0) {
                  if (*PTR___libc_single_threaded_00715c50 == '\0') {
                    LOCK();
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                    UNLOCK();
                  }
                  else {
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                  }
                }
                puVar20 = puVar12;
                if (puVar6 != puVar24) {
                  puVar15 = puVar6;
                  do {
                    *puVar20 = *puVar15;
                    uVar7 = puVar15[1];
                    puVar15[1] = 0;
                    puVar20[1] = uVar7;
                    *puVar15 = 0;
                    puVar20 = puVar20 + 2;
                    puVar15 = puVar15 + 2;
                  } while (puVar15 != puVar24);
                }
                if (puVar6 != (undefined8 *)0x0) {
                  operator_delete(puVar6);
                }
                *(undefined8 **)(this + 0x58) = puVar12;
                *(undefined8 **)(this + 0x60) = puVar20 + 2;
                *(undefined8 **)(this + 0x68) = puVar12 + uVar22 * 2;
              }
              else {
                *puVar24 = *(undefined8 *)(pIVar23 + 0x28);
                lVar10 = *(long *)(pIVar23 + 0x30);
                puVar24[1] = lVar10;
                if (lVar10 != 0) {
                  if (*PTR___libc_single_threaded_00715c50 == '\0') {
                    LOCK();
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                    UNLOCK();
                    puVar24 = *(undefined8 **)(this + 0x60);
                  }
                  else {
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                  }
                }
                *(undefined8 **)(this + 0x60) = puVar24 + 2;
              }
            }
          }
        }
        piVar16 = piVar16 + 2;
      } while (piVar16 != piVar5);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  plVar13 = *(long **)(this + 0x58);
  plVar17 = *(long **)(this + 0x60);
  if (plVar13 == plVar17) {
    plVar17 = plVar13;
  }
  else {
    do {
      if (*(long *)(*plVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_function_call();
      }
      (**(code **)(*plVar13 + 0x18))();
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar17);
    plVar13 = *(long **)(this + 0x58);
    plVar17 = *(long **)(this + 0x60);
  }
  return CONCAT71((int7)((ulong)plVar13 >> 8),plVar13 != plVar17);
}


