// Function : __invoke<hb_draw_funcs_t,hb_draw_state_t,void>
// Namespace: auto_juce:getPathDrawFuncs__:__18
// Entry    : 00355290
// Prototype: undefined __invoke<hb_draw_funcs_t,hb_draw_state_t,void>(float param_1, float param_2, float param_3, float param_4, undefined8 param_5_00, Path * param_6)
// Body     : 00355290 - 00355297


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __invoke<hb_draw_funcs_t, hb_draw_state_t, void>(hb_draw_funcs_t*, void*, hb_draw_state_t*,
   float, float, float, float, void*) */

void __cdecl
auto_juce::getPathDrawFuncs()::$_18::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>
          (float param_1,float param_2,float param_3,float param_4,undefined8 param_5_00,
          Path *param_6)

{
  juce::Path::quadraticTo(param_1,param_2,param_3,param_4,param_6);
  return;
}


