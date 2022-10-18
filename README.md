# sousarbarb.github.io

Personal website.

## Installation

### Jekyll

See [Installation](https://jekyllrb.com/docs/installation/windows/) instructions
in the Jekyll documentation.

1. Download and install the Ruby dev kit
2. Run `ridk install` step on the last stage of the installation wizard (select
   `Finish` and put option `3` in the terminal that opened automatically for
   installing `MSYS2 and MINGW development tool chain`)
3. Open `New Terminal` and install Jekyll and Bundler using
   `gem install jekyll bundler`
4. Check if Jekyll was installed correctly using `jekyll -v`

### GitHub Pages

1. Create a branch as a publishing source or use one already existing in the
   repository
2. Configure a publishing source:
   1. Go to Github Pages (GitHub Repository > Settings > Pages)
   2. Source: Select `Deploy from a branch`
   3. Branch: Select `main` and `/root` and click `Save`

## Usage

### Jekyll

1. Create new Jekyll site using `jekyll new` and open the GemFile
   ```sh
   cd <REPOSITORY>/docs
   jekyll new --skip-bundle .
   code GemFile
   ```
2. Add `#` to the beginning of the line starting with `gem "jekyll"`
3. Uncomment the line starting with `gem "github-pages"` and replace it with
   `gem "github-pages", "~> GITHUB-PAGES-VERSION", group: :jekyll_plugins`,
   where `GITHUB-PAGES-VERSION` can be found in
   [Dependency versions](https://pages.github.com/versions/)
4. From the command line, run `bundle install`
5. Make the necessary edits to the `_config.yaml` file
6. Test the website locally (New Terminal: run `bundle exec jekyll serve`)
