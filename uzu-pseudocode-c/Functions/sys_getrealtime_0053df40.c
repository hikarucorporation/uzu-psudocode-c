// Function : sys_getrealtime
// Namespace: 
// Entry    : 0053df40
// Prototype: double sys_getrealtime(void)
// Body     : 0053df40 - 0053dfad


double sys_getrealtime(void)

{
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  if (sys_getrealtime_then == 0 && DAT_0071dff8 == 0) {
    sys_getrealtime_then = local_10.tv_sec;
    DAT_0071dff8 = local_10.tv_usec;
  }
  return (double)(local_10.tv_usec - DAT_0071dff8) * DAT_00656ba0 +
         (double)(local_10.tv_sec - sys_getrealtime_then);
}


