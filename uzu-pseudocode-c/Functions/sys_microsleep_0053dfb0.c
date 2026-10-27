// Function : sys_microsleep
// Namespace: 
// Entry    : 0053dfb0
// Prototype: undefined sys_microsleep(void)
// Body     : 0053dfb0 - 0053e252


void sys_microsleep(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  __useconds_t __useconds;
  long *plVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  timeval local_138;
  fd_set local_128;
  fd_set local_a8;
  
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  pthread_mutex_lock((pthread_mutex_t *)(*(long *)(*plVar6 + 0x38) + 0x50));
  pthread_rwlock_rdlock((pthread_rwlock_t *)sys_rwlock);
  *(undefined4 *)(*plVar6 + 0x180) = 1;
  __useconds = sched_get_sleepgrain();
  local_138.tv_sec = 0;
  local_138.tv_usec = 0;
  lVar8 = *plVar6;
  piVar9 = *(int **)(lVar8 + 0x38);
  iVar14 = *piVar9;
  if (iVar14 == 0) {
    if (__useconds == 0) goto LAB_0053e1f3;
  }
  else {
    local_a8.fds_bits[0xe] = 0;
    local_a8.fds_bits[0xf] = 0;
    local_a8.fds_bits[0xc] = 0;
    local_a8.fds_bits[0xd] = 0;
    local_a8.fds_bits[10] = 0;
    local_a8.fds_bits[0xb] = 0;
    local_a8.fds_bits[8] = 0;
    local_a8.fds_bits[9] = 0;
    local_a8.fds_bits[6] = 0;
    local_a8.fds_bits[7] = 0;
    local_a8.fds_bits[4] = 0;
    local_a8.fds_bits[5] = 0;
    local_a8.fds_bits[2] = 0;
    local_a8.fds_bits[3] = 0;
    local_a8.fds_bits[0] = 0;
    local_a8.fds_bits[1] = 0;
    local_128.fds_bits[0] = 0;
    local_128.fds_bits[1] = 0;
    local_128.fds_bits[2] = 0;
    local_128.fds_bits[3] = 0;
    local_128.fds_bits[4] = 0;
    local_128.fds_bits[5] = 0;
    local_128.fds_bits[6] = 0;
    local_128.fds_bits[7] = 0;
    local_128.fds_bits[8] = 0;
    local_128.fds_bits[9] = 0;
    local_128.fds_bits[10] = 0;
    local_128.fds_bits[0xb] = 0;
    local_128.fds_bits[0xc] = 0;
    local_128.fds_bits[0xd] = 0;
    local_128.fds_bits[0xe] = 0;
    local_128.fds_bits[0xf] = 0;
    piVar7 = *(int **)(piVar9 + 2);
    do {
      iVar2 = *piVar7;
      iVar12 = iVar2 + 0x3f;
      if (-1 < iVar2) {
        iVar12 = iVar2;
      }
      local_128.fds_bits[iVar12 >> 6] = local_128.fds_bits[iVar12 >> 6] | 1L << ((byte)iVar2 & 0x3f)
      ;
      piVar7 = piVar7 + 6;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    bVar5 = false;
    iVar14 = select(piVar9[4] + 1,&local_128,&local_a8,(fd_set *)0x0,&local_138);
    if (iVar14 < 0) {
      perror("microsleep select");
    }
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar8 = *plVar6;
    pbVar1 = (byte *)(*(long *)(lVar8 + 0x38) + 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
    piVar9 = *(int **)(lVar8 + 0x38);
    if (0 < *piVar9) {
      lVar13 = 0;
      lVar11 = 0x10;
      bVar5 = false;
      do {
        if ((*(byte *)(piVar9 + 0x12) & 4) != 0) break;
        lVar4 = *(long *)(piVar9 + 2);
        uVar3 = *(uint *)(lVar4 + -0x10 + lVar11);
        uVar10 = uVar3 + 0x3f;
        if (-1 < (int)uVar3) {
          uVar10 = uVar3;
        }
        if (((ulong)local_128.fds_bits[(int)uVar10 >> 6] >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
          (**(code **)(lVar4 + -8 + lVar11))(*(undefined8 *)(lVar4 + lVar11));
          plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar8 = *plVar6;
          bVar5 = true;
        }
        lVar13 = lVar13 + 1;
        piVar9 = *(int **)(lVar8 + 0x38);
        lVar11 = lVar11 + 0x18;
      } while (lVar13 < *piVar9);
    }
    if ((__useconds == 0) || (bVar5)) goto LAB_0053e1f3;
  }
  *(undefined4 *)(lVar8 + 0x180) = 0;
  pthread_rwlock_unlock((pthread_rwlock_t *)sys_rwlock);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(*plVar6 + 0x38) + 0x50));
  usleep(__useconds);
  pthread_mutex_lock((pthread_mutex_t *)(*(long *)(*plVar6 + 0x38) + 0x50));
  pthread_rwlock_rdlock((pthread_rwlock_t *)sys_rwlock);
  lVar8 = *plVar6;
  *(undefined4 *)(lVar8 + 0x180) = 1;
LAB_0053e1f3:
  *(undefined4 *)(lVar8 + 0x180) = 0;
  pthread_rwlock_unlock((pthread_rwlock_t *)sys_rwlock);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(*plVar6 + 0x38) + 0x50));
  return;
}


