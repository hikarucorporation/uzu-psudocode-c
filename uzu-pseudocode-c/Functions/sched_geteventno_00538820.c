// Function : sched_geteventno
// Namespace: 
// Entry    : 00538820
// Prototype: undefined4 sched_geteventno(void)
// Body     : 00538820 - 00538834


undefined4 sched_geteventno(void)

{
  long lVar1;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  return *(undefined4 *)(lVar1 + 0xf4);
}


