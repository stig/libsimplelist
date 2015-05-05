`sl` provides a generic implementation of singly-linked lists and stacks.

`sl` does not do extra allocations behind the scenes for placeholder nodes, yet users of the library can define their node structure almost any way they want. The one important thing is that the ->next member is the first member of the structure.

Check the FunctionReference for details.

This project is in maintenance mode, but moving to google code to preserve it for posterity.

# ChangeLog #

## Version 0.3.3 (Oct 29, 2005) ##

I just got round to releasing a new version of <a href='/software/sl/'>sl</a>. There is some new functionality, but otherwise no changes. From the Freshmeat announce:

<blockquote>
<blockquote>Added the <pre><code>sl_filter()</code></pre> function. With it you can extract all (or the first N)<br>
nodes matching a certain criteria from any list. Also some minor rework of the<br>
build process, abolishing recursive make.<br>
</blockquote></blockquote>

Thanks to <a href='http://propirate.net/oracle/'>Richard Spindler</a> for providing tests and the original implementation of this function.

## Version 0.3.1 (Apr 10, 2005) ##

This release fixes a namespace collision on OS-X. New versions are available for download and from my Debian repository. Note that the ABI has changed (though the API stays the same) so recompilation of programs using this library is necessary.

## Version 0.3 (Nov 6, 2004) ##

I released sl 0.3.0 a few hours ago. I've also built new Debian packages for it and my ggtl-games package.

I've thought a bit about my GGTL library lately. I'm dissatisfied with its interface, and I see it quite likely that I will rewrite it.