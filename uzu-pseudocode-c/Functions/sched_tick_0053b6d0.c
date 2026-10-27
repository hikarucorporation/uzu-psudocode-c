// Function : sched_tick
// Namespace: 
// Entry    : 0053b6d0
// Prototype: undefined sched_tick(void)
// Body     : 0053b6d0 - 0053b7ca


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sched_tick(void)

{
  double dVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  
  puVar2 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  pdVar3 = (double *)*puVar2;
  pdVar4 = (double *)pdVar3[1];
  dVar7 = (double)((float)*(int *)((long)pdVar3[10] + 0x28) / *(float *)((long)pdVar3[10] + 0x30)) *
          _DAT_00656b88 + *pdVar3;
  if (pdVar4 != (double *)0x0) {
    iVar5 = 5000;
    do {
      dVar1 = *pdVar4;
      if (dVar7 <= dVar1) break;
      *pdVar3 = dVar1;
      if (DAT_005db340 <= dVar1) {
        pdVar3[1] = pdVar4[3];
        *pdVar4 = -1.0;
      }
      outlet_setstacklim();
      (*(code *)pdVar4[2])(pdVar4[1]);
      bVar6 = iVar5 == 0;
      iVar5 = iVar5 + -1;
      if (bVar6) {
        sys_pollgui();
        iVar5 = 5000;
      }
      if (sys_quit == 1) {
        return;
      }
      puVar2 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
      pdVar3 = (double *)*puVar2;
      pdVar4 = (double *)pdVar3[1];
    } while (pdVar4 != (double *)0x0);
  }
  *pdVar3 = dVar7;
  dsp_tick();
  sched_counter = sched_counter + 1;
  return;
}


