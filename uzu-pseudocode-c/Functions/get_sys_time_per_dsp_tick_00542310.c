// Function : get_sys_time_per_dsp_tick
// Namespace: 
// Entry    : 00542310
// Prototype: long get_sys_time_per_dsp_tick(void)
// Body     : 00542310 - 0054232d


long get_sys_time_per_dsp_tick(void)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *(long *)(*plVar1 + 0x50) + 0x50;
}


