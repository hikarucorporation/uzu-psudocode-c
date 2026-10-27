// Function : MessageManagerLock
// Namespace: juce:MessageManagerLock
// Entry    : 00481d50
// Prototype: undefined MessageManagerLock(MessageManagerLock * this, long param_1)
// Body     : 00481d50 - 0048226f


/* juce::MessageManagerLock::MessageManagerLock(juce::Thread*) */

void __thiscall juce::MessageManagerLock::MessageManagerLock(MessageManagerLock *this,long param_1)

{
  pthread_mutex_t *ppVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 *puVar4;
  int *piVar5;
  MessageManagerLock MVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  pthread_mutex_t *ppVar15;
  uint uVar16;
  bool bVar17;
  pthread_mutexattr_t local_40 [2];
  pthread_mutexattr_t local_38 [2];
  
  *(undefined ***)this = &PTR__MessageManagerLock_00712b30;
  pthread_mutexattr_init(local_40);
  pthread_mutexattr_settype(local_40,1);
  pthread_mutexattr_setprotocol(local_40,1);
  ppVar1 = (pthread_mutex_t *)(this + 8);
  pthread_mutex_init(ppVar1,local_40);
  pthread_mutexattr_destroy(local_40);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x60));
  *(undefined2 *)(this + 0x90) = 0;
  if (param_1 == 0) {
    while( true ) {
      do {
        iVar7 = pthread_mutex_trylock(ppVar1);
      } while (iVar7 != 0);
      uVar10 = MessageManager::Lock::tryAcquire((long)ppVar1);
      if ((char)uVar10 != '\0') break;
      pthread_mutex_unlock(ppVar1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x188) != 2) {
      LOCK();
      bVar17 = *(int *)(param_1 + 0x188) == 0;
      if (bVar17) {
        *(int *)(param_1 + 0x188) = 1;
      }
      UNLOCK();
      if (bVar17) {
                    /* try { // try from 00481e00 to 00481e09 has its CatchHandler @ 00482278 */
        puVar8 = operator_new(0x48);
        puVar8[1] = 0x100000001;
        *puVar8 = &PTR___Sp_counted_base_00713df8;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        pthread_mutexattr_init(local_38);
        pthread_mutexattr_settype(local_38,1);
        pthread_mutexattr_setprotocol(local_38,1);
        pthread_mutex_init((pthread_mutex_t *)(puVar8 + 2),local_38);
        pthread_mutexattr_destroy(local_38);
        puVar8[7] = 0;
        puVar8[8] = 0;
        *(__pthread_mutex_s **)(param_1 + 0x168) = &((pthread_mutex_t *)(puVar8 + 2))->__data;
        p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x170);
        *(undefined8 **)(param_1 + 0x170) = puVar8;
        if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar10 = *(ulong *)(p_Var3 + 8);
          if (uVar10 == 0x100000001) {
            *(undefined8 *)(p_Var3 + 8) = 0;
            (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
            (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var2 = p_Var3 + 8;
              uVar10 = (ulong)*(uint *)p_Var2;
              *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var3 + 8) = (int)uVar10 + -1;
            }
            if ((int)uVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
            }
          }
        }
                    /* try { // try from 00482093 to 0048209c has its CatchHandler @ 00482270 */
        puVar8 = operator_new(0x28);
        puVar8[1] = 0x100000001;
        *puVar8 = &PTR___Sp_counted_base_00713e48;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        *(undefined8 **)(param_1 + 0x178) = puVar8 + 2;
        p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x180);
        *(undefined8 **)(param_1 + 0x180) = puVar8;
        if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar10 = *(ulong *)(p_Var3 + 8);
          if (uVar10 == 0x100000001) {
            *(undefined8 *)(p_Var3 + 8) = 0;
            (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
            (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var2 = p_Var3 + 8;
              uVar10 = (ulong)*(uint *)p_Var2;
              *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var3 + 8) = (int)uVar10 + -1;
            }
            if ((int)uVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
            }
          }
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x188) = 2;
        UNLOCK();
      }
      else {
        while (*(int *)(param_1 + 0x188) != 2) {
          sched_yield();
        }
      }
    }
    ppVar15 = *(pthread_mutex_t **)(param_1 + 0x168);
    pthread_mutex_lock(ppVar15);
    pthread_mutex_lock(ppVar15);
    if ((long)*(int *)((long)ppVar15 + 0x34) != 0) {
      lVar12 = 0;
      do {
        if (*(MessageManagerLock **)(ppVar15[1].__align + lVar12) == this) goto LAB_00482208;
        lVar12 = lVar12 + 8;
      } while ((long)*(int *)((long)ppVar15 + 0x34) * 8 != lVar12);
    }
    pthread_mutex_unlock(ppVar15);
    pthread_mutex_lock(ppVar15);
    iVar7 = *(int *)((long)ppVar15 + 0x34);
    if ((int)*(uint *)((long)ppVar15 + 0x30) <= iVar7) {
      uVar14 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)((long)ppVar15 + 0x30) != uVar14) {
        if ((int)uVar14 < 1) {
          free((void *)ppVar15[1].__align);
          ppVar15[1].__align = 0;
        }
        else {
          pvVar9 = realloc((void *)ppVar15[1].__align,(ulong)uVar14 << 3);
          ppVar15[1].__align = (long)pvVar9;
        }
      }
      *(uint *)((long)ppVar15 + 0x30) = uVar14;
      iVar7 = *(int *)((long)ppVar15 + 0x34);
    }
    *(int *)((long)ppVar15 + 0x34) = iVar7 + 1;
    *(MessageManagerLock **)(ppVar15[1].__align + (long)iVar7 * 8) = this;
LAB_00482208:
    pthread_mutex_unlock(ppVar15);
    while( true ) {
      pthread_mutex_unlock(ppVar15);
      do {
        if ((*(byte *)(param_1 + 0x165) & 1) != 0) goto LAB_00481f15;
        iVar7 = pthread_mutex_trylock(ppVar1);
      } while (iVar7 != 0);
      uVar10 = MessageManager::Lock::tryAcquire((long)ppVar1);
      if ((char)uVar10 != '\0') break;
      ppVar15 = ppVar1;
    }
  }
  if (param_1 != 0) {
LAB_00481f15:
    if (*(int *)(param_1 + 0x188) == 2) {
      ppVar1 = *(pthread_mutex_t **)(param_1 + 0x168);
      pthread_mutex_lock(ppVar1);
      ppVar15 = *(pthread_mutex_t **)(param_1 + 0x168);
      pthread_mutex_lock(ppVar15);
      uVar14 = *(uint *)((long)ppVar15 + 0x34);
      if (0 < (int)uVar14) {
        lVar12 = *(long *)&ppVar15[1].__data;
        uVar10 = 0;
        do {
          if (*(MessageManagerLock **)(lVar12 + uVar10 * 8) == this) {
            uVar13 = (uint)uVar10;
            memmove((void *)(lVar12 + uVar10 * 8),(void *)(lVar12 + uVar10 * 8 + 8),
                    (long)(int)(~uVar13 + uVar14) << 3);
            iVar7 = *(int *)((long)ppVar15 + 0x34);
            uVar14 = iVar7 - 1;
            *(uint *)((long)ppVar15 + 0x34) = uVar14;
            iVar11 = iVar7 * 2 + -2;
            iVar7 = 0;
            if (-1 < iVar11) {
              iVar7 = iVar11;
            }
            if (iVar7 < *(int *)((long)ppVar15 + 0x30)) {
              uVar16 = 8;
              if (8 < (int)uVar14) {
                uVar16 = uVar14;
              }
              if ((int)uVar16 < *(int *)((long)ppVar15 + 0x30)) {
                pvVar9 = realloc((void *)ppVar15[1].__align,(ulong)uVar16 << 3);
                ppVar15[1].__align = (long)pvVar9;
                *(uint *)((long)ppVar15 + 0x30) = uVar16;
              }
            }
            pthread_mutex_unlock(ppVar15);
            if (-1 < (int)uVar13) {
              puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x178))[1];
              for (puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x178); puVar8 != puVar4;
                  puVar8 = puVar8 + 1) {
                piVar5 = (int *)*puVar8;
                if ((int)uVar13 < piVar5[1]) {
                  piVar5[1] = piVar5[1] + -1;
                }
                if ((int)uVar13 <= *piVar5) {
                  *piVar5 = *piVar5 + -1;
                }
              }
            }
            goto LAB_00481f67;
          }
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
      }
      pthread_mutex_unlock(ppVar15);
LAB_00481f67:
      pthread_mutex_unlock(ppVar1);
    }
    if ((*(byte *)(param_1 + 0x165) & 1) != 0) {
      MVar6 = (MessageManagerLock)0x0;
      goto LAB_00481f99;
    }
  }
  MVar6 = (MessageManagerLock)0x1;
LAB_00481f99:
  this[0x98] = MVar6;
  return;
}


