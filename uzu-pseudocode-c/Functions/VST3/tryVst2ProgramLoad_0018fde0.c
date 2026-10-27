// Function : tryVst2ProgramLoad
// Namespace: VST3
// Entry    : 0018fde0
// Prototype: VST3 * tryVst2ProgramLoad(VST3 * this, undefined8 param_1, int * param_2, undefined8 param_3, ulong param_4, undefined8 param_5)
// Body     : 0018fde0 - 0018fdff


/* VST3::tryVst2ProgramLoad(Steinberg::IBStream&, VST3::Optional<int>) */

VST3 * __thiscall
VST3::tryVst2ProgramLoad
          (VST3 *this,undefined8 param_1,int *param_2,undefined8 param_3,ulong param_4,
          undefined8 param_5)

{
  undefined8 local_10;
  
                    /* try { // try from 0018fded to 0018fdf6 has its CatchHandler @ 0018fe00 */
  local_10 = param_1;
  (anonymous_namespace)::loadProgram
            ((_anonymous_namespace_ *)this,&local_10,param_2,param_3,param_4,param_5);
  return this;
}


