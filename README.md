# File Manager

This package is a rewritten version of [alexusmai/laravel-file-manager], originally authored by [Aleksandr Manekin (alexusmai@gmail.com)]. It provides modern UI for File manager which can ba used as a single component in your Laravel Inertia Vue JS application.

## New Features
1. Search 
2. Big content lazy loading

## Instalation
1. Install package - using composer

```
composer require matemat/laravel-file-manager
```
2. Run command to add required NPM dependencies

```
php artisan add:dependencies
```

3. Run npm command to install added dependencies

```
npm install
```
4. Add following string into your application tailwind.config.js "content" array

```
'./vendor/matemat/laravel-file-manager/resources/js/**/*.vue'
```
5. Publish File manager vue component

```bash
php artisan vendor:publish --tag=fm-component
```
6. Now you can use it in your Vue js files 

```bash
import FileManager from '/resources/laravel-file-manager/FileManager.vue'
```

7. Publish configuration file

```bash
php artisan vendor:publish --tag=fm-config
```


## More information
[Docs](https://github.com/alexusmai/laravel-file-manager/tree/master/docs)
