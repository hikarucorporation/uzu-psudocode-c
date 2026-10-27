// Function : glob_zoom_open
// Namespace: 
// Entry    : 00537a10
// Prototype: undefined glob_zoom_open(float param_1)
// Body     : 00537a10 - 00537a27


void glob_zoom_open(float param_1)

{
  *(uint *)PTR_sys_zoom_open_007158d0 = (param_1 != 0.0) + 1;
  return;
}


