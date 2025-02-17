function [T_In_LVLH,T_LVLH_In] = TransInerLVLH(ohm,theta,i)

A = cos(ohm)*cos(theta)-sin(ohm)*sin(theta)*cos(i);
B = sin(ohm)*cos(theta)+cos(ohm)*sin(theta)*cos(i);
E = sin(theta)*sin(i);
C = -cos(ohm)*sin(theta)-sin(ohm)*cos(theta)*cos(i);
D = -sin(ohm)*sin(theta)+cos(ohm)*cos(theta)*cos(i);
F = cos(theta)*sin(i);
G = sin(ohm)*sin(i);
H = -cos(ohm)*sin(i);
K = cos(i);

T_In_LVLH = [A B E
    C D F
    G H K];

T_LVLH_In = T_In_LVLH';

% Adot = -sin(ohm)*ohm_dot*cos(theta)-cos(ohm)*sin(theta)*theta_dot-(cos(ohm)*ohm_dot*cos(i)*sin(theta)+sin(ohm)*(-sin(i)*i_dot*sin(theta)+cos(i)*cos(theta)*theta_dot));
% Bdot = cos(ohm)*ohm_dot*cos(theta)-sin(ohm)*sin(theta)*theta_dot+(-sin(ohm)*ohm_dot*cos(i)*sin(theta)+cos(ohm)*(-sin(i)*i_dot*sin(theta)+cos(i)*cos(theta)*theta_dot));
% Edot = cos(i)*i_dot*sin(theta)+sin(i)*cos(theta)*theta_dot;
% Cdot = sin(ohm)*ohm_dot*sin(theta)-cos(ohm)*cos(theta)*theta_dot-cos(ohm)*ohm_dot*cos(i)*cos(theta)-sin(ohm)*(-sin(i)*i_dot*cos(theta)-cos(i)*sin(theta)*theta_dot);
% Ddot = -cos(ohm)*ohm_dot*sin(theta)-sin(ohm)*cos(theta)*theta_dot-sin(ohm)*ohm_dot*cos(i)*cos(theta)+cos(ohm)*(-sin(i)*i_dot*cos(theta)-cos(i)*sin(theta)*theta_dot);
% Fdot = cos(i)*i_dot*cos(theta)-sin(i)*sin(theta)*theta_dot;
% Gdot = cos(ohm)*ohm_dot*sin(i)+sin(ohm)*cos(i)*i_dot;
% Hdot = sin(ohm)*ohm_dot*sin(i)-cos(ohm)*cos(i)*i_dot;
% Kdot = -sin(i)*i_dot;
% 
% T_In_LVLH_dot = [Adot Bdot Edot
%     Cdot Ddot Fdot
%     Gdot Hdot Kdot];
% 
% T_LVLH_In_dot = T_In_LVLH_dot';