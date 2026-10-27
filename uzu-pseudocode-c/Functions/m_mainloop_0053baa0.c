// Function : m_mainloop
// Namespace: 
// Entry    : 0053baa0
// Prototype: undefined4 m_mainloop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053baa0 - 0053c079


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
m_mainloop(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined7 extraout_var;
  double *pdVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined7 extraout_var_00;
  double *in_RCX;
  undefined8 extraout_RDX;
  double *pdVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *in_R8;
  undefined8 in_R9;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 uVar17;
  undefined1 auStack_64 [12];
  undefined1 in_stack_ffffffffffffff98 [16];
  timeval local_50;
  timespec local_40;
  
  sys_reopen_midi();
  bVar4 = audio_shouldkeepopen();
  uVar15 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  piVar2 = (int *)PTR_sys_hipriority_007154d8;
  if ((int)CONCAT71(extraout_var,bVar4) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
    if (sys_quit != 1) {
      sys_quit = 2;
    }
    pthread_cond_signal((pthread_cond_t *)sched_cond);
    pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
    uVar15 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    piVar2 = (int *)PTR_sys_hipriority_007154d8;
  }
LAB_0053bb27:
  do {
    while( true ) {
      iVar11 = sys_quit;
      if (sys_quit != 0) {
        if (sys_quit == 1) {
          sys_do_close_audio(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          sys_close_midi();
          return sys_exitcode;
        }
        sys_quit = 0;
        sys_do_close_audio(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        if (iVar11 == 2) {
          sys_do_reopen_audio(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8);
        }
      }
      sys_lock();
      sys_initmidiqueue();
      sys_unlock();
      if (sched_useaudio == 2) break;
      sys_lock();
      while (sys_quit == 0) {
        puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
        pdVar7 = (double *)*puVar9;
        in_RCX = (double *)pdVar7[10];
        pdVar10 = (double *)pdVar7[1];
        in_stack_ffffffffffffff98._0_8_ =
             (double)((float)*(int *)(in_RCX + 5) / *(float *)(in_RCX + 6)) * _DAT_00656b88 +
             *pdVar7;
        if (pdVar10 != (double *)0x0) {
          in_RCX = pdVar7 + 1;
          iVar11 = 5000;
          do {
            dVar1 = *pdVar10;
            if (in_stack_ffffffffffffff98._0_8_ <= dVar1) break;
            *pdVar7 = dVar1;
            if (DAT_005db340 <= dVar1) {
              *in_RCX = pdVar10[3];
              *pdVar10 = -1.0;
            }
            outlet_setstacklim();
            (*(code *)pdVar10[2])(pdVar10[1]);
            bVar4 = iVar11 == 0;
            iVar11 = iVar11 + -1;
            if (bVar4) {
              sys_pollgui();
              iVar11 = 5000;
            }
            if (sys_quit == 1) goto LAB_0053bcf0;
            puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
            pdVar7 = (double *)*puVar9;
            in_RCX = pdVar7 + 1;
            pdVar10 = (double *)pdVar7[1];
          } while (pdVar10 != (double *)0x0);
        }
        *pdVar7 = in_stack_ffffffffffffff98._0_8_;
        dsp_tick();
        sched_counter = sched_counter + 1;
LAB_0053bcf0:
        uVar17 = 0;
        if (0.0 < sched_fastforward) {
          in_stack_ffffffffffffff98._0_4_ = sched_fastforward;
          plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
          param_2 = (double)in_stack_ffffffffffffff98._0_4_ +
                    (double)((float)*(int *)(*(long *)(*plVar8 + 0x50) + 0x28) /
                            *(float *)(*(long *)(*plVar8 + 0x50) + 0x30)) * _DAT_00656b78;
          sched_fastforward = (float)param_2;
          sched_referencerealtime = sys_getrealtime();
          sched_referencelogicaltime = *(double *)*plVar8;
        }
        else {
          fVar16 = sched_fastforward;
          sys_pollgui();
          sys_pollmidiqueue();
          puVar3 = PTR_sys_idlehook_00715a30;
          param_2 = (double)CONCAT44(uVar17,fVar16);
          if (sys_quit != 0) break;
          do {
            uVar15 = sys_unlock();
            if (sched_useaudio == 0) {
              in_stack_ffffffffffffff98._0_8_ = sys_getrealtime();
              in_stack_ffffffffffffff98._8_4_ = extraout_XMM0_Dc;
              in_stack_ffffffffffffff98._12_4_ = extraout_XMM0_Dd;
              puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
              dVar1 = (*(double *)*puVar9 - sched_referencelogicaltime) * _UNK_00656bb8;
              param_2 = (in_stack_ffffffffffffff98._0_8_ - sched_referencerealtime) * _DAT_00656bb0
                        - dVar1;
              in_stack_ffffffffffffff98._8_4_ = SUB84(dVar1,0);
              in_stack_ffffffffffffff98._0_8_ = param_2;
              in_stack_ffffffffffffff98._12_4_ = (int)((ulong)dVar1 >> 0x20);
              if (_DAT_00656b98 < param_2) {
                sched_referencerealtime = sys_getrealtime();
                puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
                sched_referencelogicaltime = *(double *)*puVar9;
              }
              uVar14 = 1;
              uVar5 = (uint)(DAT_005db340 < in_stack_ffffffffffffff98._0_8_);
              if (DAT_005db340 >= in_stack_ffffffffffffff98._0_8_) goto LAB_0053be56;
            }
            else {
              uVar15 = sys_send_dacs(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
              ;
              uVar14 = (uint)uVar15;
              uVar5 = uVar14;
              if (uVar14 != 1) {
LAB_0053be56:
                uVar14 = uVar5;
                sys_lock();
                uVar15 = sys_pollgui();
                sys_unlock();
                uVar5 = sys_havegui();
                iVar11 = sched_counter;
                dVar1 = (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
                if (((uVar5 == 0) &&
                    (dVar1 = (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03), *piVar2 != 0
                    )) && (dVar1 = (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),
                          sched_idletask_sched_nextpingtime < sched_counter)) {
                  glob_watchdog();
                  iVar11 = sched_counter;
                  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                  param_2 = (double)*(int *)(*(long *)(*plVar8 + 0x50) + 0x28);
                  dVar1 = (double)*(float *)(*(long *)(*plVar8 + 0x50) + 0x30) / param_2;
                  sched_idletask_sched_nextpingtime = iVar11 + (int)dVar1 * 2;
                }
                if (sched_idletask_sched_nextmeterpolltime < iVar11) {
                  if ((sched_diored == '\x01') && (sched_dioredtime < iVar11)) {
                    pdgui_vmess(dVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                0x656bc4,"i",0,in_RCX,in_R8,in_R9,in_stack_ffffffffffffff98[0]);
                    sched_diored = '\0';
                    iVar11 = sched_counter;
                  }
                  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                  param_2 = (double)*(int *)(*(long *)(*plVar8 + 0x50) + 0x28);
                  sched_idletask_sched_nextmeterpolltime =
                       (int)((double)*(float *)(*(long *)(*plVar8 + 0x50) + 0x30) / param_2) +
                       iVar11;
                }
                if (((((int)uVar15 == 0) &&
                     ((*(code **)puVar3 == (code *)0x0 ||
                      (iVar11 = (**(code **)puVar3)(), iVar11 == 0)))) &&
                    (*(int *)PTR_sys_nosleep_00715ad8 == 0)) && (uVar14 != 2)) {
                  sys_microsleep();
                }
              }
            }
            sys_lock();
          } while (uVar14 == 0 && sys_quit == 0);
        }
      }
      uVar15 = sys_unlock();
    }
    pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
    while (sys_quit == 0) {
      gettimeofday(&local_50,(__timezone_ptr_t)0x0);
      dVar1 = (double)local_50.tv_usec * DAT_00656ba0 + _DAT_00653f50;
      local_40.tv_sec = (__time_t)dVar1;
      param_2 = (double)local_40.tv_sec;
      local_40.tv_sec = local_40.tv_sec + local_50.tv_sec;
      local_40.tv_nsec = (long)((dVar1 - param_2) * _DAT_00656ba8);
      puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
      iVar11 = callback_inprogress;
      in_stack_ffffffffffffff98._0_8_ = (double)*(undefined8 *)*puVar9;
      puVar12 = sched_mutex;
      iVar6 = pthread_cond_timedwait
                        ((pthread_cond_t *)sched_cond,(pthread_mutex_t *)sched_mutex,&local_40);
      if (((iVar6 == 0x6e) && (iVar11 == 0 && sys_quit == 0)) &&
         (puVar9 = (undefined8 *)__tls_get_addr(&PTR_007159b0),
         in_stack_ffffffffffffff98._0_8_ == *(double *)*puVar9)) {
        puVar13 = sched_mutex;
        pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
        if (callback_inprogress == 0) {
          bVar4 = sys_try_reopen_audio
                            (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,puVar13,puVar12,extraout_RDX,
                             in_RCX,in_R8,in_R9);
          uVar15 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
          if ((int)CONCAT71(extraout_var_00,bVar4) == 0) goto LAB_0053bb27;
        }
        pthread_mutex_lock((pthread_mutex_t *)sched_mutex);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)sched_mutex);
    uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  } while( true );
}


