% Get the current configuration
cfg = Simulink.fileGenControl('getConfig');

%Path where the project file is located (root path)
rootPath = fileparts(which('SFFS.prj'));

% Change the parameters to non-default locations
% for the cache and code generation folders
cfg.CacheFolder = fullfile(rootPath,'codefiles');
cfg.CodeGenFolder = fullfile(rootPath,'codefiles');
cfg.CodeGenFolderStructure = 'TargetEnvironmentSubfolder';

Simulink.fileGenControl('setConfig', 'config', cfg);