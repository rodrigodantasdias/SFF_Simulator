%%SFF_Simulator_Harness inputs

clear all
clc

run constantes.m
inp = readtable('RCS_Entradas.xlsx');

%iterations

[ite,~] = size(inp);

step_modelo = 0.01;

for i = 1:ite
    %inputs
    verificar = inp.verificar(i);
    Fn = inp.Fn(i);                                           %[N]
    rb = inp.rb(i);                                           %[m]
    actuator = inp.actuator(i);
    actuator_nonlin = inp.actuator_nonlin(i);
    mib = inp.mib(i);                                         %[s]
    F_cont_min = inp.F_cont_min(i);                           %[N]
    tc = inp.tc(i);                                           %[s]
    Tpulse = inp.Tpulse(i);
    Td = inp.Td(i);                                           %[s]

    tf = 100;
    
    if verificar
        % Run model
        run('artifacticsFolder.m')
        sim('RCS.slx');

        %outputs
        Out(i) = struct('Simulation',ans);
    end
    
end

load gong.mat
sound(y)
display('Done!')