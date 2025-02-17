% Get the current configuration
cfg = Simulink.fileGenControl('getConfig');

% Change the parameters to non-default locations
% for the cache and code generation folders
cfg.CacheFolder = fullfile('C:\Users\rodri\OneDrive\Mestrado_ITA\Dissertacao\Dissertacao_Rodrigo_Dias\SFFS','codefiles');
cfg.CodeGenFolder = fullfile('C:\Users\rodri\OneDrive\Mestrado_ITA\Dissertacao\Dissertacao_Rodrigo_Dias\SFFS','codefiles');
cfg.CodeGenFolderStructure = 'TargetEnvironmentSubfolder';

Simulink.fileGenControl('setConfig', 'config', cfg);